#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* negative et positive */
int main(void)
{
	int n = rand() % (RAND_MAX + 1);

	srand(time(NULL));

	n = rand() - RAND_MAX / 2;

	printf("The number %d is ", n);
    
    if (n > 0)
        printf("positive\n");
    else if (n == 0)
        printf("zero\n");
    else
        printf("negative\n");
    
    return 0;
}
