#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	for (int i = -5; i <= 15; i += 1)
	{
		printf("he factorial of %d is: %d\n", i, ft_recursive_factorial(i));
	}
	return (0);
}
