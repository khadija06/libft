/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:00:22 by knabeel           #+#    #+#             */
/*   Updated: 2022/08/09 19:40:32 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	d;

	d = ft_strlen(dst);
	while (dstsize <= d)
	{
		return (dstsize + ft_strlen(src));
	}
	i = 0;
	while (src[i] && d + 1 < dstsize)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*int main(void)
{
	char src[] = "jjjl";
	char dst[] = "khad";
	printf("%zu\n", ft_strlcat(src, dst, 2));
	printf("%zu\n", strlcat(src, dst, 2));
}*/