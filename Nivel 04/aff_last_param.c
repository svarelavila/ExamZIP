#include <unistd.h>
int main(int ac, char **av)
{
	int i;
	i = 0;
	if(ac > 1)
		while(av[ac-1][i]) //Bucle para escribir cada carácter del útimo argumento.
			write(1, &av[ac-1][i++], 1); // Escribe el caracter actual y avanza al siguente
		write(1, "\n", 1); // Escribe salto de línea
	return (0);
}

