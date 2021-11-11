/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:57:43 by nchabli           #+#    #+#             */
/*   Updated: 2021/11/11 12:40:01 by nchabli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str;

	j = 0;
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[start] && j < len)
	{
		str[j] = s[start];
		j++;
		start++;
	}
	str[j] = '\0';
	return (str);
}
