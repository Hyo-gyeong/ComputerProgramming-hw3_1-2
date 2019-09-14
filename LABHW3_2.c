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
	printf("�ִ�: �ε��� = %d, �� = %d\n", bestindex, best);
	printf("�ּڰ�: �ε��� = %d, �� = %d\n", leastindex, least);
 // �ּҰ�, �ִ밪�� ã�Ƽ� �ε����� �Բ� ����ϵ��� �����϶�
}
int main(void) // �������� ����
{
 int a[10];
 srand(time(NULL));
 //srand(100); // �������� �³� ���� ���ؼ� seed�� 100���� ����
 initArray(a, 10);
 printArray(a, 10);
 printMinMax(a, 10);
 return 0;
} 