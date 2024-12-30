#include <unistd.h>

int ft_isspace(char c)
{
	return (c == ' ' || (c > 8 && c < 14));
}

int main(int ac, char **av)
{	// Verifica si el número de argumentos es exactamente 2
	if (ac == 2)
					
	{ // Mientras no lleguemos al final de la cadena, avanzamos hacia el final.
		while (*av[1])
		av[1]++;
		av[1]--; // Retrocedemos al último carácter de la cadena
	// Retrocedemos hasta eliminar espacios en blanco al final de la cadena
		while (*av[1] && ft_isspace(*av[1]))
		av[1]--;
	// Retrocedemos hasta el inicio de la última palabra
		while (*av[1] && !ft_isspace(*av[1]))
		av[1]--;
	// Si terminamos en un espacio, avanzamos al inicio de la última palabra
		if (ft_isspace(*av[1]))
		av[1]++;
	// Imprimimos la última palabra
		while (*av[1] && !ft_isspace(*av[1]))
		write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
