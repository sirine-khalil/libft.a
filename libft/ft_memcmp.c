/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:38:53 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 15:21:30 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "hallo";
// 	char s2[] = "hello";
// 	int result = ft_memcmp(s1, s2, 3);
// 	printf("%d", result); 
// }