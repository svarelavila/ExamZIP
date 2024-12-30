#include <unistd.h>
int ft_scan(char *str, char c, int end)
{
	int k; // Índice para iterar sobre la cadena
	k = 0; // Inicialización del índice
	while(str[k] && k < end) //Bucle sobre la cadena hasta el índice 'end' o hasta encontrar el carácter nulo
	{
		if(str[k] == c) // Si se encuentra el carácter, devolver el caracter
			return (1);
		k++;
	}
	return (0);  // Si no se encontró el carácter, devolver 0
}

int main(int ac, char **av)
{
	int i; // Índice para iterar sobre la primera cadena
	int j; // Índice para iterar sobre la segunda cadena
	if(ac == 3) //Verificar si se pasaron dos argumentos en la línea de comandos
	{
		i = 0;
		while(av[1][i]) // Iterar sobre cada carácter de la primera cadena (av[1])
		{
			j = 0;
			while(av[2][j]) // Iterar sobre cada carácter de la segunda cadena (av[2])
			{
				if(av[1][i] == av[2][j] && !ft_scan(av[1], av[1][i], i))
				{
					write(1, &av[1][i], 1); //Escribir el carácter en la salida estándar (stdout)
					break;  // Detener la búsqueda del carácter en la segunda cadena
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1); // Escribir salto de línea
	return (0);
}

