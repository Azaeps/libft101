/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 02:06:11 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:42:04 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, int nb)
{
	int x;
	int y;

	x = 0;
	y = ft_strlen(dest);
	while (src[x] && x < nb)
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
