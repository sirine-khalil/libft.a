/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:54:21 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 17:47:12 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(long n)
{
	int	l;

	l = 1;
	while (n >= 10)
	{
		l++;
		n /= 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*s;

	num = n;
	if (n < 0)
	{
		num = -num;
		len = get_length(num) + 1;
	}
	else
		len = get_length(num);
	s = (char *) malloc (sizeof (char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (--len >= 0)
	{
		s[len] = '0' + (num % 10);
		num /= 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}

// int	main(void)
// {
// 	char *result;
// 	result = ft_itoa(-123);
// 	printf("%s", result);
// }