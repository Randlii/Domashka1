#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Rus");
	char s[100];
	char s1[100][100];
	int i = 0, c = 0, l = 0, n1, n2, t;

	printf("Введите строку: ");
	gets(s);
	printf("Введите номер на которое поставить слово 1: ");
	scanf("%d", &n1);
	printf("Введите номер на которое поставить слово 2: ");
	scanf("%d", &n2);
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{

			s1[l][c] = '\0';
			l++;
			i++;
			c = 0;
		}
		s1[l][c] = s[i];
		i++;
		c++;
	}
	s1[l][c] = '\0';
	if(n1 > n2)
	{
		t = n2;
		n2 = n1;
		n1 = t;
	}
	for (int g = 0; g <= l;)
	{
		if (g == n1 && n1 <= l && n2 <= l)
		{
			printf("%s ", s1[n2]);
			g++;
		}
		if (g == n2 && n1 <= l && n2 <=l)
		{
			printf("%s ", s1[n1]);
			g++;
		}
		if(g > l)
			break;
		printf("%s ", s1[g]);
		g++;
		
		

	}
}
