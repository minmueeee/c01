/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmin <bmin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 14:02:46 by bmin              #+#    #+#             */
/*   Updated: 2022/04/24 18:27:28 by bmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	swap(int *tab, int i, int size)
{
	int temp;

	temp = tab[i];
	tab[i] = tab[size-1];
	tab[size-1] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int mid;
	int i;

	i = 0;	
	mid = size / 2;

	while( i < mid )
	{
		swap(tab, i, size);
		i++;
		size--;
	}
}

int	main()
{
	int tab[5];
	int j;

	j = 0;
	while(j<=4)
	{
		tab[j] = j;
		j++;
	}
}
