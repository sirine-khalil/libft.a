/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:58:53 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 16:05:26 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		length;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	length = ft_strlen(s);
	if (!str)
		return (NULL);
	i = 0;
	while (i <= length)
	{
		if (str[i] == (char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *result;
// 	char s[] = "hello";
// 	result = ft_strchr(s, 'l');
// 	printf("%s", result);
// }