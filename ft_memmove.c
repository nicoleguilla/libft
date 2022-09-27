/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguillam <nguillam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:35:00 by nguillam          #+#    #+#             */
/*   Updated: 2022/09/23 15:52:46 by nguillam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst >= src)
	{
		while (len--)
			p_dst[len] = p_src[len];
	}
	else
	{
		while (len--)
		{
			*p_dst = *p_src;
			p_src++;
			p_dst++;
		}
	}
	return (dst);
}
