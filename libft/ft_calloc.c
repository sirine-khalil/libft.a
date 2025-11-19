/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:33:18 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 18:55:37 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size < __SIZE_MAX__ / nmemb)
	{
		a = (unsigned char *)malloc(nmemb * size);
		if (!a)
			return (NULL);
		while (i < (nmemb * size))
		{
			a[i] = 0;
			i++;
		}
		return ((void *)a);
	}
	return (NULL);
}

// int	main(void)
// {
// 	int *arr;
// 	size_t i = 0, count = 5;

// 	arr = (int *)ft_calloc(count, sizeof(int));

// 	while (i < count)
// 	{
// 		printf("arr[%zu] = %d\n", i, arr[i]);
// 		i++;
// 	}
// 	free(arr);
// }