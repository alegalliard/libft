/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:46:33 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/28 07:46:34 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	mem_size;
	void	*arr;

	mem_size = count * size;
	arr = malloc(mem_size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, mem_size);
	return (arr);
}
