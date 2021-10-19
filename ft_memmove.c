/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:28:40 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/18 22:29:06 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*temp_src;
	unsigned char		*temp_dest;

	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	if (temp_dest > temp_src)
	{
		while (n--)
			temp_dest[n] = temp_src[n];
		return (temp_dest);
	}
	else
		ft_memcpy(temp_dest, temp_src, n);
	return (temp_dest);
}
