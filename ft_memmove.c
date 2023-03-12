/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:49:02 by knabeel           #+#    #+#             */
/*   Updated: 2022/08/17 17:03:43 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (dst1 > src1)
	{
		while (len--)
			dst1[len] = src1[len];
	}
	else
		ft_memcpy(dst1, src1, len);
	return (dst1);
}
// int main () {
//    const char src[]  = "ABC";
//    printf("Before memmove dest = %s, src = %s\n", &src[1], src);
//    ft_memmove((void*)(&src[1]), src, 2);
//    printf("After memmove dest = %s, src = %s\n", &src[1], src);
//    return(0);
// }