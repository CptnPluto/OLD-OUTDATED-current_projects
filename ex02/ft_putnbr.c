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

void	ft_putchar(char c);

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
		digits[index] = ((n % 10) + '0');
		n /= 10;
		++index;
	}
	while (index >= 0)
	{
		index = index - 1;
		ft_putchar(digits[index]);
	}
}
