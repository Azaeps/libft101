/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 03:40:44 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:50:56 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		if (((unsigned char *)src)[x] == (unsigned char)c)
		{
			((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
			return ((void *)dst);
		}
		x++;
	}
	return (NULL);
}
