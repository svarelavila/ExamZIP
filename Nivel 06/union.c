#include <unistd.h>
int ft_scan(char *str, char c, int end)
{
	int k; //Índice para iterar sobre la cadena
	k = 0; //Inicialización del índice
	while(str[k] && k < end) //Bucle sobre la cadena hasta el índice 'end' o hasta encontrar el carácter nulo
	{
		if(str[k] == c) // Si se encuentra el carácter, devolver el caracter
			return (1);
		k++;
	}
	return (0);  //Si no se encontró el carácter, devolver 0
}

int main(int ac, char **av)
{
	int i;
	int j;
	if(ac == 3) //Verificar si se pasaron dos argumentos en la línea de comandos
	{
		i = 0;
		while(av[1][i])  // Bucle para recorrer el primer argemnto (av[1])
		{
			//Verificar con ft_scan si el caracter actual se ha escaneado anteriormente.
			if(!ft_scan(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
				i++;
		}
		j = 0;
		while(av[2][j]) // Bucle para recorrer el segundo argemnto (av[2])
		{
			//Verificar con ft_scan que caracter actual no está en el av[1] ni av[2]
			if(!ft_scan(av[1], av[2][j], i) && (!ft_scan(av[2], av[2][j], j)))
				write(1, &av[2][j], 1);
				j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

