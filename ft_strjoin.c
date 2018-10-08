/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 05:24:49 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:51:24 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	x;
	unsigned int	y;
	char			*str;

	x = 0;
	y = 0;
	while (s1[x])
		x++;
	while (s2[y])
		y++;
	str = malloc(sizeof(char *) * (x + y));
	if (!str)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x])
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[y])
		str[x++] = s2[y++];
	str[x] = '\0';
	return (str);
}
