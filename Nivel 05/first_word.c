#include <unistd.h>
int main(int ac, char **av)
{
	int i;
	i = 0;
	if(ac == 2) // Verifica si se ha pasado exactamente un argumento (además del nombre del programa)
	{
		// Bucle: avanza el índice hasta encontrar el primer carácter que no es un espacio en blanco
		while(av[1][i] == 32 || av[1][i] == 9)
			i++;
		// Bucle: imprimir caracteres NO blancos a partir de la posición actual de i
		while(av[1][i] != 32 && av[1][i] !=9 && av[1][i])
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

