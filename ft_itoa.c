/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:04:20 by knabeel           #+#    #+#             */
/*   Updated: 2022/08/15 15:07:20 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*s;
	size_t			len;

	len = counter(n);
	num = n;
	if (n < 0)
	{
		num = -1 * n;
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	if (num == 0)
		s[--len] = 0 + '0';
	while (num)
	{
		s[--len] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
/*int main(void)
{
int			n;
n = 24744364998;
char		*s;
 s = ft_itoa(n);
printf ("%s\n", s);
}*/