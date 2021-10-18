/*
ОПИСАНИЕ
Функция strnstr ();
находит первое вхождение строки, заканчивающейся нулем,
Fa little в строке Fa big, где выполняется поиск не более чем
Fa len символов. Символы, которые появляются после символа "\0",
не ищутся. Поскольку функция strnstr();
является API, специфичным для Fx, ее следует использовать
только тогда, когда переносимость не вызывает беспокойства.

ВОЗВРАЩАЕМЫЕ ЗНАЧЕНИЯ
Если Fa little является пустой строкой, возвращается Fa big;
если Fa little нигде не встречается в Fa big, возвращается NULL;
в противном случае возвращается указатель на первый символ
первого вхождения Fa little.
*/

#include "libft.h"

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t b;
	size_t l;

	b = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[b] != '\0')
	{
		l = 0;
		while (big[b + l] == little[l] && (b + l) < len)
		{
			if (big[b + l] == '\0' && little[l] == '\0')
				return ((char *)big + b);
			l++;
		}
		if (little[l] == '\0')
			return ((char *)big + b);
		b++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	haystack[30] = "aaabcabcd";
	char	needle[10] = "aaab";
	//char	*empty = (char*)"";
	int		n = 5;

	printf("ft	: %s\n", ft_strnstr(haystack, needle, n));
	printf("c	: %s\n", strnstr(haystack, needle, n));
	return (0);
}
/*
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
	
	+1 check(ft_strnstr(haystack, needle, 0) == 0); showLeaks();+
	+2 check(ft_strnstr(haystack, needle, -1) == haystack + 1); showLeaks();+ ? c:(null)
	+3 check(ft_strnstr(haystack, "a", -1) == haystack); showLeaks();+
	+4 check(ft_strnstr(haystack, "c", -1) == haystack + 4); showLeaks();+
	+5 check(ft_strnstr(empty, "", -1) == empty); showLeaks();+
	+6 check(ft_strnstr(empty, "", 0) == empty); showLeaks();+
	+7 check(ft_strnstr(empty, "coucou", -1) == 0); showLeaks();+
	+8 check(ft_strnstr(haystack, "aaabc", 5) == haystack); showLeaks();+
	+9 check(ft_strnstr(empty, "12345", 5) == 0); showLeaks();+
	+10 check(ft_strnstr(haystack, "abcd", 9) == haystack + 5); showLeaks();+
	+11 check(ft_strnstr(haystack, "cd", 8) == NULL); showLeaks();+
	+12 mbueno-g check(ft_strnstr(haystack, "a", 1) == haystack); showLeaks();+

*/