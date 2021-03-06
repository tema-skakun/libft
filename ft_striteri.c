/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:31:23 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/10/25 18:39:43 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Параметры
#1. Строка, по которой нужно выполнить итерацию.
#2. Функция, применяемая к каждому символу.

Возвращаемое значение
Отсутствует.

Внешние факторы.
Никто

Описание
Применяет функцию f к каждому символу
строки, передаваемой в качестве аргумента, и передает ее индекс
в качестве первого аргумента. Каждый символ передается по
адресу в f для изменения при необходимости
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	f(unsigned int i, char *c)
{
	*c += i;
}

int	main(void)
{
	char	str[] = "aaaaaaaaaaaaaaaaaaaaaaaaaa";

	ft_striteri(str, *f);
	printf("%s\n", str);
	return (0);
}
*/