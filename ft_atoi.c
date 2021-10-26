/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegalliard <alegalliard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 09:10:29 by alegalliard       #+#    #+#             */
/*   Updated: 2021/10/26 09:13:01 by alegalliard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_space(int c)
{
	return (c == ' '
		|| c == '\n'
		|| c == '\f'
		|| c == '\t'
		|| c == '\v'
		|| c == '\r');
}

static	int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(const char *c)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (c[i] && is_space(c[i]))
		i++;
	if (is_sign(c[i]))
	{
		if (c[i] == '-')
			sign *= -1;
		i++;
	}
	while (c[i] && ft_isdigit(c[i]))
		num = (num * 10) + (c[i++] - 48);
	return (num * sign);
}
