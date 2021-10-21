/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:16:02 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/20 23:16:05 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t max)
{
	size_t	i;

	i = 0;
	while (i < max)
	{
		if (((unsigned char *)str)[i] == (unsigned char) c)
			return (((unsigned char *)str) + i);
		i++;
	}
	return (NULL);
}
