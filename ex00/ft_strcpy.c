/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:17:30 by jporta            #+#    #+#             */
/*   Updated: 2021/06/30 17:37:21 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	i;

	i = 0;
	while (dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
