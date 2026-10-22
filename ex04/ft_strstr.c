/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:58:51 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/22 17:42:12 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*start_str;
	char	*start_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		start_str = str;
		start_to_find = to_find;
		while (*str == *to_find)
		{
			to_find++;
			if (*to_find == '\0')
				return (start_str);
			str++;
		}
		to_find = start_to_find;
		str = start_str + 1;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Hello world!";
	char	*result;

	result = ft_strstr(str, "world");
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Found NULL\n");
	result = ft_strstr(str, "xyz");
	printf("No match: %d\n", result == NULL);
	result = ft_strstr(str, " ");
	printf("Empty\n");
	return (0);
}*/
