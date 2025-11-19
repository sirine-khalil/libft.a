/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:36:39 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 17:33:43 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t				i;
	unsigned int		length;
	char				*sub;

	i = 0;
	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start > length)
	{
		sub = ft_strdup("");
		return (sub);
	}
	if ((length - start) < len)
		len = (length - start);
	sub = malloc (sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char *result;
// 	char s[] = "hello";
// 	result = ft_substr(s, 1, 3);
// 	printf("%s", result);
// }