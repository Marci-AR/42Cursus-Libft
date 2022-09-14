/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:46:16 by maareval          #+#    #+#             */
/*   Updated: 2022/04/29 12:39:38 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	val;

	s = 1;
	val = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
		s = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		val = val * 10 + (*str - '0');
		str++;
	}
	val *= s;
	return (val);
}
