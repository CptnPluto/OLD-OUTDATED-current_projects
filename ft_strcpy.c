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

void	ft_putstr(char *str);

char	ft_strcpy(char *dest, char *src)
{
	int dest_index;
	int src_index;

	dest_index = 0;
	src_index = 0;
	while (src_index != '\0')
	{
		dest[dest_index] = src[src_index];
		++dest_index;
		++src_index;
	}
	return (*dest);
}

int		main(void)
{
	char destination[] = "Sup";

	ft_strcpy(destination, "Hello, everybody");
	ft_putstr(destination);
	return (0);
}
