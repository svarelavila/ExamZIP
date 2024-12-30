#include <unistd.h>
void ft_printnum(int num)
{
	if(num > 9) // Verificar si el número tiene más de un digito
		ft_printnum(num / 10); // Llamamos recursivamente a ft_printnum con el cociente de la división por 10
	write(1, &"0123456789"[num % 10], 1); 	// Escribimos en la salida estándar el carácter correspondiente al dígito menos significativo de num
}											// num%10 devuelve el último dígito de num, el cual se usa como índice en la cadena "0123456789"
											// para obtener el carácter correspondiente, que luego se escribe en la salida estándar usando la función write
int main(void)
{
	int n;
	n = 1;
	while(n < 101)
	{
		if(n % 4 == 0 && n % 7 == 0)
			write(1, "fizzbuzz", 8);
		else if(n % 4 == 0)
			write(1, "fizz", 4);
		else if(n % 7 == 0)
			write(1, "buzz", 4);
		else
			ft_printnum(n);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}

