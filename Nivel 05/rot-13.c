#include <unistd.h>
int main(int ac, char **av)
{
	int i;
	i = 0;
	if(ac == 2) // Verifica si se pasó exactamente un argumento (además del nombre del programa)
	{
		while(av[1][i]) // Bucle que recorre cada carácter en el primer argumento (av[1])
		{
			// Si el carácter está entre 'A' y 'M' o entre 'a' y 'm', se desplaza 13 posiciones hacia adelante
			if((av[1][i] >= 'A' && av[1][i] <= 'M') || (av[1][i] >= 'a' && av[1][i] <= 'm'))
				av[1][i] +=13;
			// Si el carácter está entre 'N' y 'Z' o entre 'n' y 'z', se desplaza 13 posiciones hacia atrás
			else if((av[1][i] >= 'N' && av[1][i] <= 'Z') || (av[1][i] >= 'n' && av[1][i] <= 'z'))
				av[1][i] -=13;
			write(1, &av[1][i++], 1); // Escribe el caracter y avanza al siguiente caracter
		}
	}
	write(1, "\n", 1);
	return (0);
}

