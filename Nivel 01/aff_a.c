#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 2)                  // Si no hay 2 argumentos
        write(1, "a", 1);           // Escribo "a"
    else
    {
        while (argv[1][i] != '\0')  // Recorro el argumento
        {
            if (argv[1][i] == 'a')  // Si hay "a" en el argumento
            {
                write(1, "a", 1);   // Escribo "a"
                break ;             // Salgo del bucle, ya que si hubiera varias "a" pintaria varias
            }
            i++;
        }
    }
    write(1, "\n", 1);              // Escribo un salto de linea
    return (0);
}