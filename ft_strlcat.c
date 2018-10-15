/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 05:41:03 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 16:09:55 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t x;
	size_t dest1;
	size_t src1;

	x = 0;
	dest1 = ft_strlen(dst);
	src1 = ft_strlen(src);
	if (size == 0)
		return (dest1 + src1);
	if (size - 1 <= dest1)
		return (src1 + size);
	while (dest1 + x < size - 1)
	{
		dst[dest1 + x] = src[x];
		x++;
	}
	dst[dest1 + x] = '\0';
	return (dest1 + src1);
}
