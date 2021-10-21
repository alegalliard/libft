/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:46:32 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/20 23:00:13 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	found_at;

	i = 0;
	found_at = -1;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	if (!ft_isascii(c))
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == c)
			found_at = i;
		i++;
	}
	if (found_at >= 0)
		return ((char *)s + found_at);
	return (NULL);
}
