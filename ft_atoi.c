/*
ОПИСАНИЕ
Функция atoi() конвертирует начальную часть строки, на которую указывает nptr,
в целое число. Функция ведет себя так же, как strtol(nptr, (char **)NULL, 10);
за исключением того, что она не определяет ошибок.

ВОЗВРАЩАЕМЫЕ ЗНАЧЕНИЯ
Конвертированное значение.
*/

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int	res;
	int	neg;

	res = 0;
	neg = 1;
	while ((*nptr == ' ') || (*nptr == '\n') || (*nptr == '\t') \
			|| (*nptr == '\v') || (*nptr == '\f') || (*nptr == '\r'))
		nptr++;
	if (*nptr == '-')
		neg *= -1;
	nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = (res * 10) + (*nptr - '0');
		nptr++;
	}
	return (res * neg);
}

#include <stdio.h>

int	main(void)
{
	char	*mas;

	mas = " 	\n	\f   \r  \v   \t	 -042	u315cnvb";
	printf("ft	: %d\n", ft_atoi(mas));
	printf("c	: %d\n", atoi(mas));
	return (0);
}