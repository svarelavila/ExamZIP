#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *range; //Puntero para rango de números
	int len; // Almacenar la longitud del rango
	int i; // Contador para el bucle

	len = abs(end - start) + 1; // Calcula la longitud del rango
	// Reserva de memoria y verificar la asignación
	range = (int *)malloc(sizeof(int) * len);
	if(!range)
		return (NULL);
	
	i = 0;
	// Llena el array con los números desde start hasta end
	if(start <= end)
	{
		while(i < len)
			range[i++] = start++;
	}
	else
	{
		while(i < len)
			range[i++] = start--;
	}
	return (range);  // Retorna el puntero al array con los números del rango
}

#include <stdio.h>
int main(void)
{
	int i;
	int *num;
	
	num = ft_range(1, 3);
	i = 0;
	while(i < 3)
	{
		printf("%d\n", num[i]);
		i++;
	}
	return (0);
}





