/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:23:11 by tkayis            #+#    #+#             */
/*   Updated: 2023/01/29 20:04:34 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != (unsigned char)c)
	{
		if (!s[len++])
			return (0);
	}
	return ((char *)&s[len]);
}
