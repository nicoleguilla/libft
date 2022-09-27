/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguillam <nguillam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:35:05 by nguillam          #+#    #+#             */
/*   Updated: 2022/09/27 15:42:27 by nguillam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	char cast;

	str = (char *)s;
	cast = (char)c;
	while (*str)
	{
		if (*str == cast)
			return (str);
		str++;
	}
	if (*str == cast)
		return (str);
	else
		return (NULL);
}
