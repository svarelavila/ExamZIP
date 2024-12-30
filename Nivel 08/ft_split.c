#include <stdlib.h>
char **ft_split(char *str)
{
	int i; // Indice para recorrer la cadena original (str)
	int k; // Indice para el array de subcadenas
	int j; // Indice para cada subcadena
	char **split; // Array de punteros a subcadenas

	i = 0;
	k = 0;
	// Reserva memoria para el array de subcadenas
	if(!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	// Omitir espacio, tabulación o salto de línea
	while(str[i] == 32 || str[i] == 9 || str[i] == 10)
		i++;
	// Recorrer la cadena original
	while(str[i])
	{
		j = 0;
		// Reserva memoria para la subcadena
		if(!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		// Copia caracteres de str a la subcadena hasta encontrar espacio, tab o salto de línea
		while(str[i] != 32 && str[i] != 9 && str[1] != 10 && str[i])
			split[k][j++] = str[i++];
		// Omite espacio, tabulación o salto de línea
		while(str[i] == 32 || str[i] == 9 || str[i] == 10)
                	i++;
		split[k][j] = '\0'; // Terminar la subcadena con carácter nulo
		k++;
	}
	split[k] = NULL; // Terminar array de subcadenas con un puntero NULL
	return (split);
}

#include <stdio.h>		
		
int main(void)		
{		
	char **prueba;	
		
	prueba = ft_split("  Hola   Mundo Cruel   ");	
	printf("Primera : %s\n", prueba[0]);	
	printf("Segunda : %s\n", prueba[1]);	
	printf("Tercera : %s\n", prueba[2]);	
	return (0);	
}		
