#include "alx.h"
#include <stdio.h>
int main(void)
{
	char c;
	int len;
	char *s;

	c = 'Z';
	s = "Hello";
	len = _printf("%c, %s\n", c, s);
	printf("Number of identiers: %d\n", len);
	return (0);
}
