#include "main.h"

int main(void)
{
int len;

len = _printf(NULL);
_printf("Length:[%d]\n", len);

len = _printf("Character:[%c]\n", '\0');
_printf("Length:[%d]\n", len);

len = _printf("Percent:[%%]\n");
_printf("Length:[%d]\n", len);

len = _printf("Invalid:[%y]\n");
_printf("Length:[%d]\n", len);

return (0);
}
