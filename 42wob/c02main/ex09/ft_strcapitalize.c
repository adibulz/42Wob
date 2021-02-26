/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulz <abulz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:55:25 by abulz             #+#    #+#             */
/*   Updated: 2021/02/18 18:08:24 by abulz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int first_letter;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && first_letter)
				str[i] = str[i] - 32;
			else if ((str[i] >= 'A' && str[i] <= 'Z') && !first_letter)
				str[i] = str[i] + 32;
			first_letter = 0;
		}
		else
			first_letter = 1;
		i++;
	}
	return (str);
}

int main()
{
	char a[] = "salut, coMment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(a));
	return (0);
}