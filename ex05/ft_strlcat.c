/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:42:43 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/23 01:27:20 by lmartiro         ###   ########.fr       */
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
	while (*src != '\0')
	{
		if(j + 1 < size - i)
		{
			*dest = *src;
			dest++;
		}
		else
			*dest = '\0';
		src++;
		j++;
	}
	return (i + j);
}

void	test(char *initial, char *src, unsigned int size)
{
	char			dest[50];
	unsigned int	i;
	unsigned int	result;

	i = 0;
	while (initial[i])
	{
		dest[i] = initial[i];
		i++;
	}
	dest[i] = '\0';
	result = ft_strlcat(dest, src, size);
	printf("size=%u: \"%s\", return=%u\n", size, dest, result);
}

int	main(void)
{
	test("Hello", "World", 20);
	test("Hello", "World", 11);
	test("Hello", "World", 10);
	test("Hello", "World", 8);
	test("Hello", "World", 6);
	test("Hello", "World", 5);
	test("Hello", "World", 3);
	test("Hello", "World", 0);
	test("", "World", 10);
	test("", "World", 1);
	test("", "World", 0);
	test("Hello", "", 20);
	test("Hello", "", 3);
	test("", "", 10);
	return (0);
}

