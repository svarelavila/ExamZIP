#include <unistd.h>
int main(int ac, char **av)
{
	int i;
	i = 0;
	if(ac > 1)
		while(av[1][i]) // Bucle sobre el segundo argumento (el 1º es el programa)
			write(1, &av[1][i++], 1); // Escribe el caracter actual y avanza al siguiente
		write(1, "\n", 1); // Escribe salto de línea
	return (0);
}

