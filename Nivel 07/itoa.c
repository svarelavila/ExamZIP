#include <stdlib.h>
int ft_len_nbr(int n)
{
	int i; // Iniciar el contador en 1
	i = 1; // Si el n es negativo, encrementamos el contador
	if(n < 0)
		i++;
	while(n / 10 != 0) // Mientras n dividido por 10 no sea igua a 0
	{
		n = n / 10;
		i++;
	}
	return (i); // Devuelve la longitud calculada
}

char *ft_itoa(int nbr)
{
	int len; // Almacenar longitud
	unsigned int num_abs; // Valor absoluto de nbr
	char *str; // Cadena caracteres resultante

	len = ft_len_nbr(nbr); //Cálculo de la longitud necesaria
	str = malloc(len + 1); // Reserva de memoria incluyendo NULO. Si falla, devolver null)
	if(!str)
		return (NULL);

	str[len] = '\0'; // Colacar nulo al final de la cadena
	len--;
	
	if(nbr == 0) // Caso especial donde nbr en 0
	{
		str[0] = '0';
			return (str);
	}
	if(nbr < 0) // Manejo del signo (-) en caso de nbr negativo
	{
		str[0] = '-'; // se coloca el signo
		num_abs = nbr * -1; // nbr neg se calcula el valor absoluto (n *-1)
	}
	else // En caso positivo
		num_abs = nbr;
	while(num_abs > 0)
	{
		str[len] = (num_abs % 10) + 48;
		num_abs = num_abs / 10;
		len--;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(9));
	return (0);
}
