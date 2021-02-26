/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulz <abulz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:25:21 by abulz             #+#    #+#             */
/*   Updated: 2021/02/24 17:15:22 by abulz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		while ((str[i+j] != '\0') && (to_find[j] == str[i+j]))
		{
			if (to_find[j+1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char a[100] = "I love 42";
	char b[100] = "oe";
	printf("%s\n", ft_strstr(a, b));
	return (0);
}