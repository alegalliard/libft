/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:46:33 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/28 08:17:25 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;
	size_t	mem_size;
	mem_size = count * size;
	
	if (!(dest = malloc(mem_size)))
		return (NULL);
	ft_memset(dest, 0, mem_size);

	return ((void *)dest);
}
