/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim2.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 02:37:29 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 16:21:44 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen2(char const *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		x;
	int		y;
	int		z;

	x = 0;
	y = ft_strlen2(s);
	z = 0;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	while (s[y] == ' ' || s[y] == '\n' || s[y] == '\t' || s[y] == '\0')
		y--;
	str = malloc(sizeof(char *) * (y - x));
	while (x <= y)
	{
		str[z] = s[x];
		x++;
		z++;
	}
	return (str);
}
