/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 14:31:17 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:51:34 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t x;
	size_t y;

	x = 0;
	y = 0;
	while (x < len)
	{
		while (needle[y] == haystack[x + y] && (x + y) < len)
		{
			if (needle[y + 1] == '\0')
				return ((char *)haystack + x);
			y++;
		}
		y = 0;
		x++;
	}
	return (0);
}
