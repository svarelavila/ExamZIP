#include <stdlib.h>
int *ft_rrange(int start, int end)
{
	int *rrange; //Puntero para rango de números
	int len; // Almacenar la longitud del rango
	int i; // Contador para el bucle

	// Calcula la longitud del rango
	len = abs(end - start) + 1;
	// Reserva de memoria y verificar la asignación
	rrange = (int *)malloc(sizeof(int) * len);
	if(!rrange)
		return (NULL);

	i = 0;
	// Llena el array con los números desde start hasta end
	if(start <= end)
	{
		while(i < len)
			rrange[i++] = end--;
	}
	else
	{
		while(i < len)
			rrange[i++] = end++;
	}
	return (rrange); // Retorna el puntero al array con los números del rango
}

#include <stdio.h>
int main(void)
{
	int *num;
	int i;

	num = ft_rrange(1, 3);
	i = 0;
	while(i < 3)
	{
		printf("%d\n", num[i]);
		i++;
	}
	return (0);
}

	
