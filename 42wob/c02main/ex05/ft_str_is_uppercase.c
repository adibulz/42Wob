/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulz <abulz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:00:17 by abulz             #+#    #+#             */
/*   Updated: 2021/02/18 17:40:46 by abulz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;
	int counter;
	
	counter = -1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			counter++;
		}
		i++;
	}
	if(counter < i -1)
	return (0);
	else
	return (1);
}

int main()
{
	char a[] = "ASFEGV";
	char b[] = "989AASca";
	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	return (0);
}