/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 14:58:27 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 18:10:02 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*m;
	size_t				i;
	unsigned char		l;

	i = 0;
	m = (const unsigned char *) s;
	l = (unsigned char) c;
	while (i < n)
	{
		if (m[i] == l)
		{
			return ((void *) &m[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "Hello, world!";
// 	void *result = ft_memchr(str, 'w', 13);
// 	printf("%s", (char *)result);
// }