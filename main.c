/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 03:28:29 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/12/12 03:28:35 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int x;
	int y;
	int a;
	int	*p = &a;
	x = printf("Mhhhjjj  %c %% kljhgfd %d & %i & %s & %p & %x $ %X\n", 'd', 15, -78, "jhgfgd", p, 1457 ,1457);
	y = ft_printf("Mhhhjjj  %c %% kljhgfd %d & %i & %s & %p & %x $ %X\n", 'd', 15, -78, "jhgfgd", p, 1457 ,1457);
	printf("%d	%d", x, y);
	return 0;
}
