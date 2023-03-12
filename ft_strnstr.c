/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:27:11 by knabeel           #+#    #+#             */
/*   Updated: 2022/07/31 14:39:17 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*h;

	i = 0;
	h = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] != '\0' && needle[j] != '\0' && h[i + j] == needle[j]
			&& i + j < len)
			j++;
		if (j == n_len)
		{
			return (&h[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*result;
	char	*result1;
	char	haystack[] = "HELLO WORLD!!";
	char	needle[] = "LO";

	result = strnstr(haystack, needle, 14);
	result1 = ft_strnstr(haystack, needle, 14);


	printf("%s\n", result);
	printf("%s\n", result1);

}*/
