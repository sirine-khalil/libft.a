/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:57:13 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 18:20:07 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	lens;
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	lens = ft_strlen(s);
	str = malloc (sizeof(char) * (lens + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < lens)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	to_upper_odd(unsigned int i, char c)
// 	{
// 	if (i % 2 == 1 && c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// 	}

// 	const char *input = "hello world";
// 	char *result = ft_strmapi(input, to_upper_odd);

// 	printf("%s\n", result);

// 	free(result);
// 	return 0;
// }