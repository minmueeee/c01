/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmin <bmin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:09:45 by bmin              #+#    #+#             */
/*   Updated: 2022/04/24 20:10:10 by bmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	swap(int *ex08_arr, int i)
{
	int temp;

	temp = ex08_arr[i];
	ex08_arr[i] = ex08_arr[i+1];
	ex08_arr[i+1] = temp;

}

void	ft_sort_int_tab(int *ex08_arr,int size)
{
	int i;

	i = 0;

	while(i < size-1)
	{
		if(ex08_arr[i] > ex08_arr[i+1])
		{
		swap(ex08_arr, i);
		i = 0;
		}
		i++;
	}

}

int	main()
{
	int ex08_arr[] = {1, 15, 75, 99, 195, 2, 5, 33, 18, 30, 39, 102, 19592, 195920396, 1020394};
	int ex08_i;

	int size;

	size = 15;

	printf("ex08\n");
	printf("before sort : ");
	for(ex08_i = 0; ex08_i < 15; ex08_i++)
	{
		printf("%d", ex08_arr[ex08_i]);
		printf(", ");
	}
	printf("\n");

	ft_sort_int_tab(ex08_arr,size);

	printf("after sort : ");
	ft_sort_int_tab(ex08_arr, 15);
	for(ex08_i = 0; ex08_i < 15; ex08_i++)
	{
		printf("%d", ex08_arr[ex08_i]);
		printf(", ");
	}
	printf("\n");
	return (0);
}
