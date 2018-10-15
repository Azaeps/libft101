/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 18:21:44 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 04:58:18 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(char const *s, char c)
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

static char		*ft_putword(char const *str, char c)
{
	int		x;
	int		len;
	char	*dest;

	x = 0;
	len = 0;
	dest = 0;
	while (str[len] && str[len] != c)
		len++;
	if (!(dest = malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (x < len)
	{
		dest[x] = str[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

char			**ft_strsplit(char const *str, char c)
{
	if (!str || !c)
		return (NULL);
	int		x;
	int		y;
	int		len;
	char	**tab;

	x = 0;
	y = 0;
	tab = NULL;
	len = ft_count(str, c);
	if (!(tab = malloc(sizeof(char *) * len + 1)))
		return (NULL);
	if (x == 0 && str[x] != c)
		tab[y++] = ft_putword(str, c);
	while (str[x])
	{
		if (x > 0 && str[x] != c && str[x - 1] == c)
			tab[y++] = ft_putword(str + x, c);
		x++;
	}
	tab[y] = NULL;
	return (tab);
}

#include <stdio.h>

int		main()
{
	char s[50] ="  ";
	printf("%s\n", ft_strsplit(s, ' ')[0]);
	printf("%s\n", ft_strsplit(s, ' ')[1]);
	printf("%s\n", ft_strsplit(s, ' ')[2]);
	printf("%s\n", ft_strsplit(s, ' ')[3]);
	return (0);
}
