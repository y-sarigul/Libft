/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:37:24 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/21 09:30:40 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t	n)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	i = 0;
	s2_len = ft_strlen(s2);
	if (!s2_len)
		return ((char *)s1);
	if (n != 0)
	{
		while (s1[i] && i <= n - s2_len)
		{
			j = 0;
			while (s2[j] && s2[j] == s1[i + j])
				j++;
			if (j == s2_len)
				return ((char *)&s1[i]);
			i++;
		}
	}
	return (NULL);
}
