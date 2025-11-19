/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:38:53 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 15:24:33 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sr;

	i = 0;
	dst = (unsigned char *) dest;
	sr = (unsigned char *) src;
	while (i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "hello";
// 	char dest[10];
// 	ft_memcpy(dest, src, 4);
// 	printf("%s",dest);
// }