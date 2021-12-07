#include <stdio.h>
#include <stdlib.h>
int main()
{

int s;
int *A=NULL;
int *B=NULL;
int flag=0;
int o=0;
printf("Введите величину массива:\n ");
scanf("%d", &s);
A = (int *)malloc(s * sizeof(int));
B = (int *)malloc(s * sizeof(int));
printf("Введите массив: ");
for (int i = 0; i < s; i++)
scanf("%d", &A[i]);
for (int l = 0; l < s; l++)
{
for (int l1 = 0; l1 < s; l1++)
{
if (B[l1] == A[l] )
flag=1;
}
if(flag==0){
B[o]=A[l];
o++;
} else{
flag=0;
}

}
printf("различных элементов %d", o);
free(A);
}