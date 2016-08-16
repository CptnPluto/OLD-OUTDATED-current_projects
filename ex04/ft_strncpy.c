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

// Is this actually working?

void	ft_putstr(char *c);


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int unsigned uindex;

	uindex = 0;
	while ((src[uindex] != '\0') && (uindex <= n)) 
	{
		dest[uindex] = src[uindex];
		++uindex;
	}
	while ((src[uindex] == '\0') && (uindex <= n))
	{
		dest[uindex] = '\0';
		++uindex;
	}
	return (dest);
}


int		main(void)
{
	char destination[10];

	ft_strncpy(destination, "abcdefgh", 5);
	ft_putstr(destination);
	return (0);
}


/*
char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return (dest);
}


char	*ft_strcpy(char *dest, char *src)
{
	int dest_index;
	int src_index;

	dest_index = 0;
	src_index = 0;
	while (src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		++dest_indexl;
		++src_index;
	}

}
*/