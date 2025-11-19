/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:38:05 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/05 19:48:42 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// int main(void)
// {
// 	char	s[10]= "1233456789";
// 	printf("%s\n", s);
// 	ft_bzero(s, 5);
// 	int i = 0;
// 	while (i < 10)
// 	{
// 		printf("%c", s[i]);
// 		i++;
// 	}
// }