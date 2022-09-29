/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguillam <nguillam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:35:32 by nguillam          #+#    #+#             */
/*   Updated: 2022/09/28 16:52:04 by nguillam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	cast;

	str = (char *)s;
	cast = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == cast)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
