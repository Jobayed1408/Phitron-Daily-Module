#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int* ptr = (int*) malloc(n*sizeof(int));
	printf("\nEnter %d input for this array:  \n",n);
	for (int i = 0; i < n; i++) {
		scanf("%d", (ptr+i));
	}
	printf("\n");

	for (int i = 0; i < n; i++) {
		printf("%d th position -> %d \n",i,*(ptr+i));
	}
	free(ptr);

}
