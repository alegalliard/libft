/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:08:35 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/20 23:08:40 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t max)
{
	size_t	i;

	i = 0;
	if (max == 0)
		return (0);
	while (str1[i] && str2[i] && i < (max - 1))
	{
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	return (str1[i] - str2[i]);
}
