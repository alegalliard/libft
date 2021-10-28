/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:56:58 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/28 07:56:59 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*clone;
	size_t	size;

	size = ft_strlen(s) + 1;
	clone = malloc(size * sizeof(char));
	if (!s || !clone)
		return (NULL);
	ft_strlcpy(clone, s, size);
	return (clone);
}
