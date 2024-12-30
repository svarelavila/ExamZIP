#include <unistd.h>
int main(void)
{
	//Escribir los caracteres 'z' y salto de línea
	write(1, "z\n", 2);
	return (0);
}

