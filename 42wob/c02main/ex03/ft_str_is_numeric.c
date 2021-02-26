/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulz <abulz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:22:22 by abulz             #+#    #+#             */
/*   Updated: 2021/02/18 18:05:11 by abulz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	int counter;
	
	counter = -1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
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
	char a[] = "3242sda3523";
	char b[] = "9892";
	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));
	return (0);
}