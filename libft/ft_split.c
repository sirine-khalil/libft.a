/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:54:27 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 16:00:28 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count ++;
		i++;
	}
	return (count);
}

static char	*next_word(const char **s, char c)
{
	const char	*start;
	int			len;
	char		*word;
	int			i;

	i = 0;
	while (**s == c)
		(*s)++;
	start = *s;
	len = 0;
	while (start[len] && start[len] != c)
		len++;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	*s += len;
	return (word);
}

static void	free_all(char **arr, int n)
{
	while (n--)
		free(arr[n]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		count;

	i = 0;
	if (!s)
		return (NULL);
	count = count_words(s, c);
	res = malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	while (i < count)
	{
		res[i] = next_word(&s, c);
		if (!res[i])
		{
			free_all(res, i);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}

// int	main(void)
// {
// 	char **result;
// 	char s[] = "hello hello hello hello";
// 	result = ft_split(s,' ');
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("%s", result[i]);
// 		i++;
// 	}
// }