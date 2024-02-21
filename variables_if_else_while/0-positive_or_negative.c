#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
srand(time(NULL));
int n = rand() % (RAND_MAX + 1);

printf("The number %d is ", n);

if (n > 0)
printf("positive\n");
else if (n == 0)
printf("zero\n");
else
printf("negative\n");

return 0;
}
