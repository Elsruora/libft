/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:45:42 by nchabli           #+#    #+#             */
/*   Updated: 2021/11/11 17:47:38 by nchabli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findthestart(char const *s1, char const *set)
{
	int				i;
	unsigned int	j;
	int				done;

	done = 0;
	i = 0;
	while (s1[i] && done == 0)
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			++j;
		if (j == (ft_strlen(set)))
			done = 1;
		else
			i++;
	}
	return (i);
}

int	ft_findtheend(char const *s1, char const *set)
{
	int				i;
	unsigned int	j;
	int				done;

	done = 0;
	i = ft_strlen(s1) - 1;
	while (s1[i] && done == 0)
	{	
		j = 0;
		while (s1[i] != set[j] && set[j])
			++j;
		if (j == (ft_strlen(set)))
			done = 1;
		else
			i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		start;
	int		end;
	char	*str;

	start = ft_findthestart(s1, set);
	end = ft_findtheend(s1, set);
	len = end - start;
	str = ft_substr(s1, start, len);
	return (str);
}
