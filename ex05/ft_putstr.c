/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmin <bmin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:00:06 by bmin              #+#    #+#             */
/*   Updated: 2022/04/24 23:53:51 by bmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while(*str !=0)
	{	
		write(1, str, 1);
		str++;
	}
}

int	main()
{
	char str[] = "aoiefjaowkefjawef";

	ft_putstr(str);
	return 0;
}

