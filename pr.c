#include "main.h"

int main(void)
{
int num = 42;
char ch = 'A';
char *str = "Hello, World!";

/* Test format specifiers */

_printf("Character: %c\n", ch);
_printf("String: %s\n", str);
_printf("Percentage: %%\n");
_printf("Integer: %d\n", num);

return (0);
}

