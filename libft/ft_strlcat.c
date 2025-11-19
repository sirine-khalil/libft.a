/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:41:42 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 16:45:11 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = 0;
	srclen = ft_strlen(src);
	while (dst[dstlen] != '\0' && dstlen < size)
		dstlen++;
	i = dstlen;
	j = 0;
	if (size > 0)
	{
		while ((i + 1) < size && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		if (dstlen < size)
			dst[i] = '\0';
	}
	return (dstlen + srclen);
}

// int	main (void)
// {
// 	size_t result;
// 	char dst[] = "hello";
// 	char src[] = "hello";
// 	result = ft_strlcat(dst, src, 4);
// 	printf("%s\n", dst);
// 	printf("%zu", result);	
// }