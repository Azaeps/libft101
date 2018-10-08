/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 10:15:24 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:51:44 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int x;

	x = 0;
	while (x > n)
	{
		if (((unsigned char *)s1)[x] < ((unsigned char *)s2)[x])
			return (-1);
		if (((unsigned char *)s1)[x] == ((unsigned char *)s2)[x])
			return (0);
		if (((unsigned char *)s1)[x] > ((unsigned char *)s2)[x])
			return (1);
	}
	return (0);
}
