/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:57:08 by jporta            #+#    #+#             */
/*   Updated: 2021/07/03 14:44:15 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	ch;
	char			*b;

	b = "0123456789abcdef";
	i = 0;
	while (1)
	{
		ch = str[i];
		if (ch == '\0')
		{
			break ;
		}
		if (ch < 32 || ch > 126)
		{
			write(1, "\\", 1);
			write(1, &b[ch / 16], 1);
			write(1, &b[ch % 16], 1);
		}
		else
		{
			write(1, &ch, 1);
		}
		i += 1;
	}
}
