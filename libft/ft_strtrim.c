/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:53:26 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 19:00:12 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && check_sep(s1[start], set))
		start++;
	while (end > start && check_sep(s1[end - 1], set))
		end--;
	str = malloc (sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	const char *s1 = "+++Hello World***";
// 	const char *set = "+*";
// 	char *trimmed = ft_strtrim(s1, set);

// 	printf("Original : \"%s\"\n", s1);
// 	printf("Trimmed  : \"%s\"\n", trimmed);

// 	free(trimmed);
// 	return 0;
// }