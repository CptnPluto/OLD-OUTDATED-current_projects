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

void	ft_putnbr(int nb);

int ft_atoi(char *str)
{
	int result;
	int index;
	int sign;

	sign = 1;
	index = 0;
	result = 0;
	if (str[0] == '-')
	{
		sign = -1;
		++index;
	}
	while (str[index] != '\0')
	{
		while ((str[index] >= '0' && str[index] <= '9') ? 0 : 1)
		{
			index ++;
		}
		if (str[index] != '\0')
		{
			result = ((result * 10) + (str[index]) - '0');
			++index;
		}
	}
	return (result *sign);
}

int	main(void)
{
	ft_putnbr(ft_atoi("123test456test7test"));
	return (0);
}

