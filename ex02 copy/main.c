/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <brlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:18:48 by brlee             #+#    #+#             */
/*   Updated: 2022/02/26 14:35:58 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	nb;

	nb = 5;
	ft_putnbr(nb);
	ft_putnbr(-2147483648);
	ft_putnbr(388);
	return (0);
}
