/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:04:39 by axlee             #+#    #+#             */
/*   Updated: 2023/10/15 16:38:39 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_newread(int fd)
{
	char	*aux;
	int		nbytes;

	aux = malloc(BUFFER_SIZE + 1);
	if (!aux)
		return (NULL);
	nbytes = read(fd, aux, BUFFER_SIZE);
	if (nbytes < 0)
		return (free(aux), NULL);
	aux[nbytes] = '\0';
	return (aux);
}

/* Code Explaination:
 *
 * ft_newread: Reads a certain amount of data from a file into a dynamically
 * allocated memory block and returns that data
 *
 * Code Breakdown:
 *
 * Allocates memory for "aux" using "malloc"
 *
 * Check if "aux" is not NULL after "malloc"
 *
 * Reads "BUFFER_SIZE" bytes from "fd" into "aux". The number of
 * bytes read is stored in variable nbytes
 *
 * Checks if "nbytes" is less than 0
 *
 * Set the null terminator at the end of the "aux" to mark
 * the end of the data
 *
 * Return pointer to "aux", which contains the read data
 */

char	*ft_expand_buffer(char *buf, int fd)
{
	char	*newbuf;
	int		newlen;
	char	*aux;

	aux = ft_newread(fd);
	if (!aux)
		return (free(buf), NULL);
	if (!aux[0])
		return (free(aux), buf);
	if (!buf)
		return (aux);
	newlen = ft_strlen(buf) + ft_strlen(aux);
	newbuf = malloc(newlen + 1);
	if (!newbuf)
		return (free(newbuf), NULL);
	ft_strlcpy(newbuf, buf, newlen + 1);
	ft_strlcat(newbuf, aux, newlen + 1);
	return (free(buf), free(aux), newbuf);
}

/* Code Explaination:
 *
 * ft_expand_buffer: Expands a buffer by concatenating data read from a file
 * with the existing buffer and returns the expanded buffer
 *
 * Code Breakdown:
 *
 * Declare an integer variable "newlen" to store the length of the new buffer
 *
 * Declare two character pointer called "newbuf" and "aux"
 *
 * Calls the "ft_newread" function to read the file descriptor "fd" and assign
 * the result to "aux"
 *
 * If "aux" pointer is NULL, means that the memory allocation for "aux"
 * has failed and then it will free the allocated memory for "buf" and
 * return NULL to state the failure of the operation
 *
 * If "aux" is an empty string (i.e '\0'), means no data was read from the
 * file and free the memory allocated for "aux", and returns the orginal
 * buffer without any changes
 *
 * If "buf" is NULL(indicating an empty buffer), return "aux"
 *
 * Then calculate the new length of the buffer by adding the length of "buf"
 * and "aux"
 *
 * Then you allocate memory to "newbuf" = malloc(newlen + 1)
 *
 * And if there is nothing in the memory, free the memory and return NULL
 *
 * Then you copy the contents of "buf" to "newbuf" using "ft_strlcpy"
 *
 * Concatenate the contents of "aux" to "newbuf" using "ft_strlcat"
 *
 * Free the memory for "buf" and "aux"
 *
 * Return newbuf
 */

char	*ft_shrink_buffer(char *buf, char *line)
{
	char	*newbuf;
	int		line_len;

	if (!buf || !line)
		return (buf);
	line_len = ft_strlen(line);
	if ((int)ft_strlen(buf) == line_len)
		return (free(buf), NULL);
	newbuf = ft_substr(buf, line_len, ft_strlen(buf) - line_len);
	return (free(buf), newbuf);
}

/* Code Explaination:
 *
 * ft_shrink_buffer: Removes a specific line from a buffer by creating
 * a new buffer that excludes the line and returning the new buffer
 *
 * Code Breakdown:
 *
 * Chekc if "buf" or "line" is NULL. If either one of them is NULL,
 * return the original "buf"
 *
* Calculate the length of the "line" and store it in "line_len"
*
* Check if the length of "buf" is equal to the "line_len". If they
* are equal, free the memory allocated for "buf" and return "NULL"
*
* Create a new buffer "newbuf" by extracting a substring from
* the end of "line" and continuing to the end of "buf"
*
* Then free the memory allocated for the original "buf"
*
* Return the new "buffer".
*/

char	*get_next_line(int fd)
{
	static char	*buf[4096];
	char		*line;
	size_t		old_len;

	if (fd < 0 || fd > 4095 || BUFFER_SIZE < 0)
		return (NULL);
	line = NULL;
	if (ft_strchr_index(buf[fd], '\n') == -1)
	{
		old_len = ft_strlen(buf[fd]);
		buf[fd] = ft_expand_buffer(buf[fd], fd);
		if (old_len == ft_strlen(buf[fd]) && buf[fd])
			line = ft_substr(buf[fd], 0, ft_strlen(buf[fd]));
	}
	if (!buf[fd])
		return (NULL);
	if (!line && ft_strchr_index(buf[fd], '\n') != -1)
		line = ft_substr(buf[fd], 0, ft_strchr_index(buf[fd], '\n') + 1);
	if (line)
	{
		buf[fd] = ft_shrink_buffer(buf[fd], line);
		return (line);
	}
	return (get_next_line(fd));
}

/* Code Purpose:
 *
 * Reads lines from a file descriptor fd by expanding and shrinking a buffer,
 * and returns each extracted line
 *
 * Code Breakdown:
 *
 * Checks if the file descriptor "fd" is valid (between 0 and 4095) and if 
 * "BUFFER_SIZE" is non-negative. If not, return "NULL"
 *
 * Declare a static character pointer array "buf" with a size of 4096 to store
 * the buffers for each file descriptor.
 *
 * 4096 is the maximum number of file descriptor UNIX can open simultanesouly,
 * size is chosen to strike a balance between memory usage and practicality.
 *
 * Declare character pointer "line" to store the extracted line
 *
 * Declare size_t variable "old_len" to store the length of the buffer before
 * expanding 
 *
 * Check if the buffer for the given "fd" does not contain a new line 
 *
 * If it doesn't store the old length of the buffer in "old_len"
 *
 * Expand the buffer by calling the "ft_expand_buffer" function, passing the
 * buffer and "fd" as arguements
 *
 * If the old length is equal to the new length of the buffer and the buffer
 * is not empty, extract the entire buffer as line using "ft_substr" function
 *
 * Check if the buffer for the given "fd" is empty. If it is, return NULL
 *
 * Check if there is no line extracted and the buffer contains a new line
 *
 * != -1 is used to check if the newline character is found in the buffer
 * before extracting a substring to the point.
 *
 * If the character is not found, "ft_strchr_index" would typically return -1.
 *
 * Exract a substring from the bugger starting from the beginning up to the
 * first occurence of a newline character ('\n') using the "ft_substr" function
 *
 * If a line is extracted:
 * 	Shrink the buffer by calling "ft_shrink_buffer" function, passing the 
 * 	buffer and the extracted line as arguments
 *
 * 	Return the extracted line.
 *
 * If no line is extracted, recursively call the "get_next_line" function
 * with the same file descriptor fd
 */ 

/*int	main(void)
{
	int	fd = open("test2.txt", O_RDONLY);
	char	*line1 = get_next_line(fd);
	//char	*line2 = get_next_line(fd);
	printf("%s |", line1);
}*/

/* Declare a main function
 *
 * Open a file named "test2.txt" in read-only mode and assign file
 * descriptor to 'fd'
 *
 * Declare a character pointer variable named "line 1" to store the
 * result of the 'get_next_line' function
 *
 * Calls the 'get_next_line' function with the file descriptor 'fd'
 * as an argurment and assign the result to "line 1"
 *
 * Prints the value of "line 1" followed by a '|' character
 */
