/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:37:24 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/10/15 17:37:40 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ОПИСАНИЕ
Данные функции проверяют, попадает ли символ c (который должен иметь значение
unsigned char или EOF) в определенный класс символов, существующих в текущем
окружении.
Проверяет, является ли символ цифрой (от нуля до 9-и).

ВОЗВРАЩАЕМЫЕ ЗНАЧЕНИЯ
Возвращаются ненулевые значения, если проверяемый символ c попадает в
соответствующий класс символов, в противном случае возвращается ноль. 
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	n = 49;

	printf("ft	: %d\n", ft_isdigit(n));
	printf("c	: %d\n", isdigit(n));
	return (0);
}
*/