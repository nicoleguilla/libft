/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguillam <nguillam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:35:09 by nguillam          #+#    #+#             */
/*   Updated: 2022/09/26 20:56:13 by nguillam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dest))
		len = ft_strlen(src) + dstsize;
	else
		len = ft_strlen(dest) + ft_strlen(src);
	while (dest[i] > 0)
		i++;
	while (i < dstsize - 1 && src[j] > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}
