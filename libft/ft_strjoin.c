/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:55:21 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 16:12:33 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	char	*str;
	int		i;
	int		j;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < lens1)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < lens2 && i < (lens1 + lens2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char *join;
// 	char s1[] = "hello";
// 	char s2[] = "hi";
// 	join = ft_strjoin(s1, s2);
// 	printf("%s", join);
// }