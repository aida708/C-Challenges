/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your_name> <your_email>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by <your_name>      #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by <your_name>     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_a(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			write(1, "A\n", 2);
			return;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "A\n", 2);
	else
		aff_a(argv[1]);
	return (0);
}
