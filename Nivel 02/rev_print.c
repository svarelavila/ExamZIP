#include <unistd.h>
int main(int ac, char **av)
{
	int i; // Declarar el contador
	i = 0; // Iniciallizar en 0
	if(ac == 2) // Si hay 2 argumentos, ejecuta el código dentro del bucle
	{
		while(av[1][i]) // Bucle para recorrer el argumento pasado como segundo argumento
			i++;
		while(i) // Bucle para escribir el argumento al revés
			write(1, &av[1][--i], 1);
	}
	write(1, "\n", 1); // Escribir salto de línea
	return (0);
}

/*
Primera opción si el subject pide una función		

#include <unistd.h>		
void	rev_print(char *str)	
{		
	int i;	
		
	i = 0;	
	while (str[i])	
	    i++;	
	while (i)	
	    write(1, &str[--i], 1);	
}		


int	main(int ac, char **av)	
{		
	if (ac == 2)	
	    rev_print(av[1]);	
	write(1, "\n", 1);	
	return (0);	
}
*/

/*
Primera opción si el subject pide una función		

#include <unistd.h>			
char	*rev_print(char *str)		
{			
	int i;		
			
	i = 0;		
	while (str[i])		
	    i++;		
	while (i)		
	    write(1, &str[--i], 1);		
	return (str);		
}			
			
int	main(void)		
{			
	rev_print("rainbow dash")		
	write(1, "\n", 1);		
	rev_print("Ponies are awesome")		
	write(1, "\n", 1);		
	rev_print("")		
	write(1, "\n", 1);		
	return(0);		
}			

*/