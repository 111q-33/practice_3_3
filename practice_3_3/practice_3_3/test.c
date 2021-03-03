#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void * my_memcpy(void * s1, const void* s2, int i)
//{
//	void *ret = s1;
//	while (i)
//	{
//		*(char*)s1 = *(char*)s2;
//		((char*)s1)++;
//		((char*)s2)++;
//		i--;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2,arr1,16);
//	return 0;
//}
void* my_memmove(void* s1, const void* s2, int count)
{
	void * ret = s1;
	if (s1 < (char*)s2 + count)
	while (count)
	{
		count--;
		*((char*)s1 + count) = *((char*)s2 + count);
	}
	else
	while (count)
	{
		*(char*)s1 = *(char*)s2;
		((char*)s1)++;
		((char*)s2)++;
		count--;
	}
	return ret;
}
int main()
{
	int arr[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr + 2, arr, 16);
	return 0;
}