/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 04:05:25 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:51:00 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int	x;
	unsigned char	*tmp;

	x = 0;
	tmp = (unsigned char *)dst;
	if ((unsigned char *)src < (unsigned char *)dst)
	{
		while (--n)
			tmp[n] = ((unsigned char *)src)[n];
	}
	else
	{
		while (++x < n)
			tmp[x] = ((unsigned char *)src)[x];
	}
	return (dst);
}
