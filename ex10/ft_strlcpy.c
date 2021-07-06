/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:14:30 by jporta            #+#    #+#             */
/*   Updated: 2021/07/06 12:11:11 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
		a++;
	if (size != 0)
	{
		while (src[b] != '\0' && b < (size - 1))
		{
			dest[b] = src[b];
			b++;
		}
		dest[b] = '\0';
	}
	return (a);
}
