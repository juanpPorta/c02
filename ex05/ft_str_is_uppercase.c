/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:46:15 by jporta            #+#    #+#             */
/*   Updated: 2021/07/01 15:49:55 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_uppercase (char *str)
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
			if (*(str + i) > 64 && *(str + i) < 91 )
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
