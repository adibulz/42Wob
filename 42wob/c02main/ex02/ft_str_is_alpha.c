/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulz <abulz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:34:37 by abulz             #+#    #+#             */
/*   Updated: 2021/02/18 12:09:41 by abulz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	int counter;
	
	counter = -1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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
	char a[] = "feaddaAAXsdas";
	char b[] = "hjkhfjk9";
	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	return (0);
}