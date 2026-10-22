/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:42:43 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/22 17:51:51 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (j + 1 < n - i)
	{
		*dest = *src;
		dest++;	
		src++;
		j++;
	}
	*dest = '\n';
	return (i + j);
}
