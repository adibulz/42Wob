/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulz <abulz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:07:18 by abulz             #+#    #+#             */
/*   Updated: 2021/02/18 12:13:48 by abulz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;
	int counter;
	
	counter = -1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
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
	char a[] = "ASF873928473EGV";
	char b[] = "±√√√√√√√√√√√√√";
	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	return (0);
}