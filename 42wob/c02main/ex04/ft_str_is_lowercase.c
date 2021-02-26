/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulz <abulz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:27:00 by abulz             #+#    #+#             */
/*   Updated: 2021/02/17 18:29:35 by abulz            ###   ########.fr       */
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
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char a[] = "qwdhqowheoi";
	char b[] = "Asd";
	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	return (0);
}