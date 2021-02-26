/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulz <abulz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:20:32 by abulz             #+#    #+#             */
/*   Updated: 2021/02/19 10:52:45 by abulz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char a[100] = "32";
	char b[100] = " how are you?";
	printf("%s\n", ft_strncat(a, b, 4));
	return (0);
}