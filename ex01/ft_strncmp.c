/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:21:31 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/23 01:40:27 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *st1, char *st2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char)st1[i] != ((unsigned char)st2[i]))
			|| (st1[i] == '\0') || (st2[i] == '\0'))
			return ((unsigned char)st1[i] - (unsigned char)st2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*text1;
	char	*text2;
	char	*text3;

	text1 = "aababa";
	text2 = "aaa";
	text3 = "aabaabb";
	printf("%d\n", ft_strncmp(text1, text2, 3));
	printf("%d\n", ft_strncmp(text3, text1, 5));
	printf("%d\n", ft_strncmp(text2, text3, 2));
	return (0);
}*/
