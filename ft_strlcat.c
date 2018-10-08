/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 05:41:03 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 20:01:35 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	x = 0;
	y = 0;
	z = 0;
	(void)size;
	while (dst[x])
		x++;
	while (src[y])
	{
		dst[x++] = src[y++];
	}
	dst[x] = '\0';
	while (dst[z])
		z++;
	return (z);
}

int main(void)
{
	char x []= "Hello, world.";
	char *r =  malloc(30 * sizeof(x));
	ft_strlcat (r, x, 9);
	ft_strlcat (r , x+7, 15);
	for(; *r != '\0'; r++)
		printf("%c-", *r);
	printf("\n");  
	return 0;
}
