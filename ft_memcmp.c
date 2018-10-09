/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 10:15:24 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 18:10:42 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*int		ft_memcmp(const void *s1, const void *s2, size_t n)
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
}*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int x;
	char *s3;
	char *s4;

	s3 = (char *)s1 + n;
	s4 = (char *)s2 + n;
	x = 0;
	ft_strcmp(s3, s4);
	return (0);
}
