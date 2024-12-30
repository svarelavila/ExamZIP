#include <stdio.h>
int ft_strlen(char *str)
{
	int i; // Declarar el contador
	i = 0; // Iniciar el contador a =
	// Bucle para recorrer el string
	while(str[i])
		i++; // Incremento
	return (i);
}

int main(void)
{
	printf("Long: %d\n", ft_strlen("1234"));
	return (0);
}


