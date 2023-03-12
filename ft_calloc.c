/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:57:26 by knabeel           #+#    #+#             */
/*   Updated: 2022/08/02 18:34:45 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (count != 0 && size != 0 && count > SIZE_MAX / size)
		return (0);
	str = (char *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
/*int main(void)
{
	char *str;
	str = "hellolttt";
	str = calloc(5, 3);
	printf("%s", str);
}*/