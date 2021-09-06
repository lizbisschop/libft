/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 18:55:17 by lbisscho       #+#    #+#                */
/*   Updated: 2019/11/14 16:55:15 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	i = 0;
	destination = (unsigned char*)dst;
	source = (unsigned char*)src;
	if (dst == '\0' && source == '\0')
		return (0);
	if (source < destination)
	{
		while (len > 0)
		{
			len--;
			destination[len] = source[len];
		}
	}
	else
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	return (destination);
}
