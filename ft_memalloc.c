/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 00:56:01 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:40:08 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_memalloc(size_t n)
{
	void	*x;

	if (!(x = malloc(sizeof(void *) * n)))
		return (NULL);
	ft_bzero(x, n);
	return (x);
}
