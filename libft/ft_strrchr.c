/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:55:23 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 17:15:50 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		j;

	str = (char *) s;
	j = 0;
	while (str[j])
	{
		j++;
	}
	if ((char) c == '\0')
		return (&str[j]);
	while (j >= 0)
	{
		if (str[j] == (char) c)
		{
			return (&str[j]);
		}
		j--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *result;
// 	char s[] = "hello";
// 	result = ft_strrchr(s, 'l');
// 	printf("%s", result);
// }