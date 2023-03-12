/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:37:07 by knabeel           #+#    #+#             */
/*   Updated: 2022/08/09 18:03:45 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	f(unsigned int i, char *s2)
{
	s2[i] += 1;
}
int	main(void)
{
	char    s2[] = "HELLO";
	unsigned int i;
	i = 0;
	ft_striteri (s2, f);
printf("%s\n", s2);
return (0);
}*/
