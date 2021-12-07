#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int s,c = 0, k = 0, maxk = 0;
	int *A;
	printf("Введите величину массива:\n ");
	scanf_s("%d", &s);
	A = (int *)malloc(s * sizeof(int));
	printf("Введите массив: ");
	for(int i = 0; i < s; i++)
		scanf_s("%d",&A[i]);
	for(int l = 0; l < s; l++)
	{
		for(int l1 = 0; l1 < s; l1++)
		{
			if(A[l] == A[l1] && l != l1)
				k++;
		}
		if(k > maxk) 
		{            
			c = A[l];
			maxk = k;
		}
		k = 0;
	}
	printf("Самое частое значение: %d", c);
	free(A);
}
