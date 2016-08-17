/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnessaiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 20:13:59 by dnessaiv          #+#    #+#             */
/*   Updated: 2016/08/10 20:28:26 by dnessaiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void	ft_putnbr(int nb)
{
	int		index;
	char	digits[10];
	int 	unsigned n;

	n = nb;
	index = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	while (n)
	{
		digits[index++] = ((n % 10) + '0');
		n /= 10;
	}
	while (index > 0)
	{
		ft_putchar(digits[--index]);
	}
}

int		ft_atoi(char *str)
{
	long result;
	long prev;
	int index;
	int sign;

	sign = 1;
	index = 0;
	result = 0;
	prev = 0;
	if (str[0] == '-')
	{
		sign = -1;
		++index;
	}
	while (str[index] != '\0')
	{
		if (str[index] > 47 && str[index] < 58)
		{
			return ((int)(result * sign));
		}
		
		prev = result;
		result = ((result * 10) + (str[index]) - '0');
		if (result < prev)
		{
			return ((int)(9223372036854775807));
		}
		++index;
	}
	return ((int)(result * sign));
}

int	main(int argc, char **argv)
{
	ft_putnbr(ft_atoi("9223372036854775809"));
	ft_putchar('\n');
	printf("%d\n", ft_atoi("9223372036854775809"));
	ft_putchar('\n');
	printf("%d\n", atoi("9223372036854775809"));
	ft_putnbr(atoi("9223372036854775809"));
	printf("%d | %d (min: %d, max: %d)\n", ft_atoi("-9223372036854775807"), atoi("-9223372036854775807"), ((int)LONG_MIN), ((int)LONG_MAX));
	
	return (0);
}
