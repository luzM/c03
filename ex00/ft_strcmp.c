/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:36:25 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 18:47:10 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *st1, char *st2)
{
	while ((*st1 != '\0') || (*st2 != '\0'))
	{
		if (*st1 != *st2)
			return (0);
		st1++;
		st2++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*text1;
	char	*text2;
	char	*text3;

	text1 = "aaaa";
	text2 = "aaa";
	text3 = "aaaa";
	printf("%d\n", ft_strcmp(text1, text2));
	printf("%d\n", ft_strcmp(text3, text1));
	return (0);
}*/
