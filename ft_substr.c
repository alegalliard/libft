/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:42:26 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/28 08:42:27 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
/* aloca e retorna uma substring da string s
a substring inicia no start e tem o tamanho máximo de len
*/
	if(!(sub = malloc((len + 1) * sizeof(char))))
		return NULL;
	i = 0;
	while(len && s[i])
	{
		sub[i++] = s[start++]; //tá dando overlap
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
