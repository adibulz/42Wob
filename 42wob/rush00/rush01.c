/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulz <abulz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 01:26:56 by abulz             #+#    #+#             */
/*   Updated: 2021/02/14 01:35:48 by abulz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar();

void	display_first_line(int a)
{
	int count_a;

	count_a = 2;
	ft_putchar('/');
	while (count_a < a)
	{
		ft_putchar('*');
		count_a++;
	}
	if (count_a == a)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	display_middle_lines(int b)
{
	int count_b;

	count_b = 1;
	if (count_b == 1)
	{
		ft_putchar('*');
		count_b++;
	}
	while (count_b < b)
	{
		ft_putchar(' ');
		count_b++;
	}
	if (count_b == b)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	display_last_line(int c)
{
	int count_c;

	count_c = 2;
	ft_putchar('\\');
	while (count_c < c)
	{
		ft_putchar('*');
		count_c++;
	}
	if (count_c == c)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int count_y;
	int a;
	int b;
	int c;

	a = x;
	b = x;
	c = x;
	count_y = 1;
	display_first_line(a);
	while (count_y < y - 1)
	{
		display_middle_lines(b);
		count_y++;
	}
	display_last_line(c);
}
