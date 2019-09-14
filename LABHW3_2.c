#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void initArray(int arr[], int size)
{
int i;
for (i = 0; i < size; i++)
arr[i] = rand() % 100;
return;
}
void printArray(int arr[], int size)
{
int i;
for (i = 0; i < size; i++)
printf("%d ", arr[i]);
printf("\n");
}
void printMinMax(int arr[], int size)
{
	int i, leastindex, bestindex;
	int least = 10000, best = -10000;

	for (i = 0; i < size; i++){
		if (least >= arr[i]) {
			least = arr[i];
			leastindex = i;
		}
		if (best <= arr[i]) {
			best = arr[i];
			bestindex = i;
		}
	}
	printf("최댓값: 인덱스 = %d, 값 = %d\n", bestindex, best);
	printf("최솟값: 인덱스 = %d, 값 = %d\n", leastindex, least);
 // 최소값, 최대값을 찾아서 인덱스와 함께 출력하도록 정의하라
}
int main(void) // 변경하지 말라
{
 int a[10];
 srand(time(NULL));
 //srand(100); // 실행결과가 맞나 보기 위해서 seed를 100으로 고정
 initArray(a, 10);
 printArray(a, 10);
 printMinMax(a, 10);
 return 0;
} 