/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhalil <skhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:52:27 by skhalil           #+#    #+#             */
/*   Updated: 2025/06/06 15:31:35 by skhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	forward_copy(unsigned char *des, const unsigned char *sr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
}

static void	backward_copy(unsigned char *des, const unsigned char *sr, size_t n)
{
	while (n > 0)
	{
		n--;
		des[n] = sr[n];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*des;
	const unsigned char	*sr;

	if (!dest && !src)
		return (NULL);
	des = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	if (des < sr)
		forward_copy(des, sr, n);
	else
		backward_copy(des, sr, n);
	return (dest);
}

// int	main(void)
// {
// 	char dest[10];
// 	char src[] = "hello";
// 	ft_memmove(dest, src, 4);
// 	printf("%s",dest);
// }