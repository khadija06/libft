/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:12:47 by knabeel           #+#    #+#             */
/*   Updated: 2022/08/14 15:56:14 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (str1 == str2 || n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*int main (void)
{
	char	str1[] = "dgRR";
	char	str2[] = "dgrr";
	int c;

	c = 3;
		printf("%d\n", ft_strncmp(str1, str2, c));
		
}*/
