/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:21:55 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/24 20:22:41 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t max)
{
	size_t	i;
	size_t	j;
	size_t	curr;
	size_t	sub_len;

	i = 0;
	j = 0;
	curr = 0;
	sub_len = ft_strlen(sub);
	if(sub_len < 1)
		return ((char *)str);
	while (str[i] && i < max)
	{
		curr = i;
		while (sub[j] && str[curr] == sub[j])
		{
			curr++;
			j++;
		}
		if (j == sub_len && curr <= max)
			return ((char *)str + curr - sub_len);
		j = 0;
		i++;
	}
	return (NULL);
}
