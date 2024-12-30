#include <unistd.h>
void ft_putstr(char *str)
{
	//Bucle para recorrer el string
	while(*str)
		write(1, str++, 1);
}

int main(void)
{
	ft_putstr("Hola Mundo");
	return (0);
}

