#include <stdio.h>

int main(void)
{
	int list[10] = {10,20,30,40,50,40,30,20,10,0};
	int value;
	int keyIndex;

	printf("���� %d\n", sumList(list, 10));

	printf("���� ū ���� %d\n", maxList(list, 10));
	
	printf("Ž���� ����?");
	scanf("%d", &value);

	keyIndex = indexSearch(list, 10, value);

	if (indexSearch(list, 10, value) == -1)
		printf("�� %d�� ���� ù��° ���� �����ϴ�.\n",value);
	else
		printf("�� %d�� ���� ù��° ���� %d��°�� �ֽ��ϴ�.\n", value,keyIndex+1); //�� indexSearch(list, 10, value)+1 �̷��� ������� ���� �տ� keyIndex��� �����ϸ� ����
}
int sumList(int arr[], int size) //�迭 �������ٶ� []�ʿ�
{
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}
int maxList(int arr[], int size)
{
	int i, best = -1000;

	for (i = 0; i< size; i++) {
		if (arr[i] > best)
			best = arr[i];
	}
	return best;
}
int indexSearch(int arr[], int size, int key)
{
	int i, index;

	for (i = 0; i < size; i++) {
		if(arr[i] == key) {
			index = i;
			break;
		}
		else
			index = -1;
	}
	return index;

}