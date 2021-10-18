/*
ОПИСАНИЕ
calloc() распределяет память для массива размером nmemb, каждый
элемент которого равен size байтов, и возвращает указатель на
распределенную память. Память при этом "очищается".

malloc() распределяет size байтов и возвращает указатель на распределенную память.
Память при этом не "очищается".

free() освобождает место в памяти, на которое указывает ptr,
возвращенный, по-видимому, предшествующим вызовом функций malloc(),
calloc() или realloc(). Иначе (или если уже вызывался free(ptr))
дальнейший ход событий непредсказуем. Если ptr равен NULL,
то не выполняется никаких действий.

ВОЗВРАЩАЕМЫЕ ЗНАЧЕНИЯ
Для calloc() и malloc() возвращаемые значения являются указателем на память,
которая должным образом распределена для каждого типа переменных; или NULL,
если запрос завершился некорректно.

free() не возвращает значений.
*/

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*mem;
	
	mem = malloc(nelem * elsize);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, elsize * nelem);
	return (mem);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*a;
	char	*b;
	
	a = ft_calloc(6, 8);
	b = calloc(6, 8);
	
	printf("ft  : %p\n", a);
	printf("c   : %p\n", b);
	
	printf("ft  : %s\n", a);
	printf("c   : %s\n", b);
}
/*
	void * p = ft_calloc(2, 2);
	char e[] = {0, 0, 0, 0};
	1 check(!memcmp(p, e, 4));
	2 mcheck(p, 4); free(p); showLeaks();
*/