#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 14
#define KI 12
#define KI2 10
#define TASK11


#ifdef TASK1
int main()
{
	int k = 0, arr[SIZE] = { 0 };
	srand(time(0));
	for (int i = 0; i < SIZE; ++i)
	{
		arr[i] = rand()%21-10;
		printf("%d\n", arr[i]);
		if (arr[i] % 2 == 0)
			++k;
	}
	printf("number %d\n", k);
	return 0;
}
#endif //TASK1
#ifdef TASK1p
int main()
{
	int k = 0, *arr = 0;
	srand(time(0));
	arr = (int*)malloc(SIZE*sizeof(int));
	for (int i = 0; i < SIZE; ++i)
	{
		arr[i] = rand() % 21 - 10;
		printf("%d\n", arr[i]);
		if (arr[i] % 2 == 0)
			++k;
	}
	printf("number %d\n", k);
	free(arr);
	return 0;
}
#endif //TASK1p
#ifdef TASK2
int main()
{
	int k = 0, arr[KI] = { 0 };
	srand(time(0));
	for (int i = 0; i < KI; ++i)
	{
		arr[i] = rand();
		printf("%d\t", arr[i]);
		k += arr[i];
	}
	printf("\n");
	arr[5] = k/2;
	for (int i = 0; i < KI; ++i)
		printf("%d\t", arr[i]);
		return 0;
}
#endif //TASK2
#ifdef TASK3
int main()
{
	int l = 0, k = 0, arr[KI2] = { 0 };
	srand(time(0));
	for (int i = 0; i < KI2; ++i)
	{
		arr[i] = rand()-30000;
		//arr[i] = rand()%6 - 1;
		printf("%d\t", arr[i]);
		k += arr[i];
	}
	for (int i = 0; i < KI2; ++i)
	{
		if (abs(arr[i]) > k / 2)
			l=l+1;
	}
		printf("\n");
		printf("%d\n", l);
	return 0;
}
#endif //TASK3 KI2
#ifdef TASK4
int main()
{
	int l = 0, k = 0, arr[KI2] = { 0 };
	srand(time(0));
	for (int i = 0; i < KI2; ++i)
	{
		arr[i] = rand() - 30000;
		//arr[i] = rand()%6 - 1;
		printf("%d\t", arr[i]);
		if (arr[i] > k)
		{
			k = arr[i];
			l = i;
		}
	}
	printf("\n");
	arr[0]^=arr[l]^=arr[0]^=arr[l];
	for (int i = 0; i < KI2; ++i)
		printf("%d\t", arr[i]);
	return 0;
}
#endif //TASK4 KI2
#ifdef TASK5
int main()
{
	int m = 0, n= 0, l = 0, k = 0, arr[KI2] = { 0 };
	srand(time(0));
	arr[0] = rand() - 30000;
	k = m = arr[0];
	printf("%d\t", arr[0]);
	for (int i = 1; i < KI2; ++i)
	{
		arr[i] = rand() - 30000;
		//arr[i] = rand()%6 - 1;
		printf("%d\t", arr[i]);
		if (arr[i] > k)
		{
			k = arr[i];
			l = i;
		}
		else if (arr[i] < m)
		{
			m = arr[i];
			n = i;
		}
	}
	printf("\n");
	arr[n]^=arr[l]^=arr[n]^=arr[l];
	for (int i = 0; i < KI2; ++i)
		printf("%d\t", arr[i]);
	return 0;
}
#endif //TASK5 KI2
#ifdef TASK6
int main()
{
	int p = 0, k = 0, arr[KI2] = { 0 };
	srand(time(0));
	for (int i = 0; i < KI2; ++i)
	{
		arr[i] = rand() - 30000;
		//arr[i] = rand()%6 - 1;
		printf("%d\t", arr[i]);
		if (arr[i]%2==0)
			++p;
		else ++k;
	}
	printf("\n");
	if (k < p)
		puts("More even");
	else puts("More odd");
	return 0;
}
#endif //TASK6 KI2
#ifdef TASK7
int main()
{
	int k = 0, arr[KI2] = { 0 };
	srand(time(0));
	arr[0] = rand() - 30000;
	printf("%d\t", arr[0]);
	for (int i = 1; i < KI2; ++i)
	{
		arr[i] = rand() - 30000;
		//arr[i] = rand()%6 - 1;
		printf("%d\t", arr[i]);
		if (arr[i] > arr[0])
			++k;
	}
		printf("\n%d\n", k);
	return 0;
}
#endif //TASK7 KI2
#ifdef TASK8
int main()
{
	int m = 0, n = 0, l = 0, k = 0, arr[KI2] = { 0 };
	srand(time(0));
	arr[0] = rand() % 21 - 10;
	k = m = arr[0];
	printf("%d\t", arr[0]);
	for (int i = 1; i < KI2; ++i)
	{
		arr[i] = rand() % 21 - 10;
		//arr[i] = rand()%6 - 1;
		printf("%d\t", arr[i]);
		if (arr[i] > k)
		{
			k = arr[i];
			l = i+1;
		}
		else if (arr[i] < m)
		{
			m = arr[i];
			n = i+1;
		}
	}
	if (l == 0) ++l;
	if (n == 0) ++n;
	printf("\n");
		printf("Max %d Min %d\t", l,n);
	return 0;
}
#endif //TASK8
#ifdef TASK9
int main()
{
	int m = 0, n = 0, l = 0, k = 0, arr[KI2] = { 0 };
	srand(time(0));
	for (int i = 0; i < KI2; ++i)
	{
		arr[i] = rand() % 21 - 10;
		//arr[i] = rand()%6 - 1;
		printf("%d\t", arr[i]);
		k += arr[i];
	}
	printf("\n\n");
	for (int i = 0; i < KI2; ++i)
	{
		arr[i] = arr[i] - k / 2;
		printf("%d\t", arr[i]);
	}
	return 0;
}
#endif //TASK9
#ifdef TASK10
int main()
{
	int m = 0, n = 0, j = 0, k = 0, arr[KI2] = { 0 };
	srand(time(0));
	for (int i = 0; i < KI2; ++i)
	{
		arr[i] = rand() % 21 - 10;
		//arr[i] = rand()%6 - 1;
		printf("%d\t", arr[i]);
		if (arr[i] < 0)
			k += arr[i];
	}
	printf("\n\n");
	k = abs(k) / 2; printf("%d\n", k);
	for (int i = 0; i < KI2; ++i)
	{
		if (abs(arr[i])>k)
			j += abs(arr[i]);
	}
	printf("%d\n", j);
	return 0;
}
#endif //TASK10# Massive
