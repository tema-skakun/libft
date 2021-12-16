/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:32:49 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/10/22 19:44:17 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Параметры
#1. Символ для вывода.
#2. Файловый дескриптор, на который нужно писать.

Возвращаемое значение
Никто

Внешние факторы.
write

Описание
Выводит символ 'c' в указанный файловый дескриптор.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	c;
	int		fd;

	c = 'a';
	fd = 1;
	ft_putchar_fd(c, fd);
	return (0);
}
*/