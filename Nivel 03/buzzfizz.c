#include <unistd.h>
void ft_printnum(int num)
{
	if(num > 9)
		ft_printnum(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}
int main(void)
{
	int n;
	n = 1;
	while(n < 101)
	{
		if(n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(n % 3 == 0)
			write(1, "fizz", 4);
		else if(n % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_printnum(n);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
