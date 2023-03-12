/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:43:39 by knabeel           #+#    #+#             */
/*   Updated: 2022/07/25 16:00:59 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		if (s1[i] == (char)c)
		{
			return ((void *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	const char str[] = "ABCDEDFG";
	const int chars[] = {'D', 'd'};
	for (size_t i = 0; i < sizeof chars / (sizeof chars[0]); ++i)
	{
		const int c = chars[i];   
		const char *ps = ft_memchr(str, c, 7);
		ps ? printf ("character '%c'(%i) found: %s\n", c, c, ps)
			: printf ("character '%c'(%i) not found\n", c, c);
	}
	return (0);
}*/