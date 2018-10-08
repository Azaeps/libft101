/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 02:20:40 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:51:27 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	x;
	char			*str;

	x = 0;
	while (s[x])
		x++;
	str = malloc(sizeof(char *) * x);
	x = 0;
	while (s[x])
	{
		str[x] = f(s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
