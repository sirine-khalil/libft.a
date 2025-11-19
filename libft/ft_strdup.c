/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:17:11 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 16:07:20 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	d = malloc(sizeof(char) * (i + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

// int	main(void)
// {
// 	char s[] = "hello";
// 	char *result;
// 	result = ft_strdup(s);
// 	printf("%s", result);
// }