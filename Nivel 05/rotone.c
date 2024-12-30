#include <unistd.h>
int main(int ac, char **av)
{
	int i;
	i = 0;
	if(ac == 2) // Verifica si se pasó exactamente un argumento (además del nombre del programa)
	{
		while(av[1][i]) // Bucle que recorre cada carácter en el primer argumento (av[1])
		{
			// Si el carácter está entre 'A' y 'Y' o entre 'a' y 'y', se desplaza una posicón hacia delante
			if((av[1][i] >= 'A' && av[1][i] <= 'Y') || (av[1][i] >= 'a' && av[1][i] <= 'y'))
				av[1][i]++;
			// Si el carácter ' es 'Z' o 'z' se desplaza a la 'a' o 'A'
			else if(av[1][i] == 'Z' || av[1][i] == 'z')
				av[1][i] -=25;
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}

