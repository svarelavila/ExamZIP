#include <unistd.h>
int main(int ac, char **av)
{
	int i; // Indice recorrer string
	int space; // Bandera para indicar espacio o tabulador 

	i = 0;
	space = 0;

	if(ac == 2)
	{
		// Omitir espacios y tabulaciones al inicio.
		while(av[1][i] == 32 || av[1][i] == 9)
			i++;
		while(av[1][i])
		{
			// Verificar si el caracter actual es espacio o tabulador
			if(av[1][i] == 32 || av[1][i] == 9)
				space = 1; // Establecer la bandera a 1.
			else
			{
				if(space) // Si hay bandera escribir los 3 espacios
					write(1, "   ", 3);
				space = 0; // Restablecer la bandera a 0
				write(1, &av[1][i], 1); // Escribir el caracter actual
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


