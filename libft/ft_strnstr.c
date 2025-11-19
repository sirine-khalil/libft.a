/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:06:01 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 17:11:00 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	i;
	size_t	j;

	b = (char *) big;
	l = (char *) little;
	i = 0;
	if (l[i] == '\0')
	{
		return (b);
	}
	while (i < len && b[i])
	{
		j = 0;
		while ((i + j) < len && b[i + j] == l[j])
			j++;
		if (l[j] == '\0')
		{
			return (&b[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *result;
// 	char big[] = "hello hi hey";
// 	char little[] = "hi";
// 	result = ft_strnstr(big, little, 12);
// 	printf("%s", result); 
// }