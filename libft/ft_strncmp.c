/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 14:32:31 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 17:06:14 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	char		*c1;
	char		*c2;

	c1 = (char *) s1;
	c2 = (char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && c1[i] && c2[i])
	{
		if (c1[i] != c2[i])
			return ((unsigned char)c1[i] - (unsigned char)c2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)c1[i] - (unsigned char)c2[i]);
}

// int	main(void)
// {
// 	char s1[] ="hello";
// 	char s2[] ="hello";
// 	int result = ft_strncmp(s1, s2, 5);
// 	printf("%d", result);
// }