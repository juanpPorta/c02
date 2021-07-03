/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:41:59 by jporta            #+#    #+#             */
/*   Updated: 2021/07/01 15:47:05 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_lowercase (char *str)
{
	int		i;
	char	v;

	i = 0;
	v = 1;
	if (*str != 0)
	{
		while (*(str + i) != '\0' && v != 0)
		{
			v = 0;
			if (*(str + i) > 96 && *(str + i) < 123 )
			{
				v = 1;
				i++;
			}
		}
		return (v);
	}
	v = 1;
	return (v);
}
