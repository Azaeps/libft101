/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 18:21:44 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 05:01:32 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(char const *s, char c)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (s[x])
	{
		if (s[x] == c)
		{
			while (s[x] == c)
				x++;
			y++;
		}
		else
			x++;
	}
	return (y);
}

char	*ft_putword(char const *str, char c)
{
	int		x;
	int		len;
	char	*dest;

	x = 0;
	len = 0;
	dest = 0;
	while (str[len] && str[len] != c)
		len++;
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (x < len)
	{
		dest[x] = str[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

char	**ft_strsplit(char const *str, char c)
{
	int		x;
	int		y;
	int		len;
	char	**tab;

	x = 0;
	y = 0;
	tab = NULL;
	len = ft_count(str, c);
	tab = malloc(sizeof(char*) * (len + 1));
	if (!tab)
		return (NULL);
	while (str[x])
	{
		if (x == 0 && str[x] != c)
			tab[y++] = ft_putword(str, c);
		else if (x > 0 && str[x] != c && str[x - 1] == c)
			tab[y++] = ft_putword(str + x, c);
		x++;
	}
	tab[y] = NULL;
	return (tab);
}
