/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:44:58 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/22 16:58:22 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*start;

	i = 0;
	start = dest;
	while (*dest != '\0')
		dest++;
	while ((i < nb) && (*src != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (start);
}
/*
int	main(void)
{
	char	dest[30] = "Hello ";
	char	*result;

	result = ft_strncat(dest, "world", 3);
	printf("Result: %s\n", dest);
	return(0);
}*/
