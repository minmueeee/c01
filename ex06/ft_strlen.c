/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmin <bmin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:35:40 by bmin              #+#    #+#             */
/*   Updated: 2022/04/24 23:57:24 by bmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str+ i) !=0)
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	str[20] = "sldfjlake";

	ft_strlen(str);
	return (0);
}
