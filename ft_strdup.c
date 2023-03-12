/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:32:06 by knabeel           #+#    #+#             */
/*   Updated: 2022/08/17 17:14:03 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*copy;

	i = 0;
	len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
// int main()
// {
// 	char source[] = "you are smart";
// 	char* target = ft_strdup(source);
// 	printf("%s", target);
// 	return (0);
// }