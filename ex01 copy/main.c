/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <brlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:45:13 by brlee             #+#    #+#             */
/*   Updated: 2022/02/24 17:54:24 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

void	ft_putstr(char *str);

int	main(void)
{
	char str[] = {'W', 'E', 'L', 'L', 'C', 'O', 'M', 'E'};

	ft_putstr(str);
	return (0);
}
