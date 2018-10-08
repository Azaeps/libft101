/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 03:46:36 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 17:03:27 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (haystack[x] != '\0')
	{
		while (needle[y] == haystack[x + y])
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

/*int		main()
{
	char s1[50];
	char s2[50];

	strcpy(s1, "");
	strcpy(s2, "");
	printf("%s 1\n", ft_strstr(s1, s2));
	printf("%s 2\n", strstr(s1, s2));
	return (0);
}*/
