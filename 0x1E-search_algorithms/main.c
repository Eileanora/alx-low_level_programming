#include "search_algos.h"

int main()
{
	int array[] = {1, 2, 3, 4 ,5, 6, 10};
	printf("linar %d\n", linear_search(array, 7, 5));
	printf("binary %d\n", binary_search(array, 7, 5));
	return (0);
}
