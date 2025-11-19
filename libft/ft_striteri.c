/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:47:30 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 18:17:38 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	void	to_upper_even(unsigned int i, char *c)
// 	{
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		*c -= 32;
// 	}
// 	char str[] = "hello world";
// 	ft_striteri(str, to_upper_even);
// 	printf("%s\n", str);
// 	return 0;
// }