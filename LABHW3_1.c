#include <stdio.h>

int main(void)
{
	int list[10] = {10,20,30,40,50,40,30,20,10,0};
	int value;
	int keyIndex;

	printf("합은 %d\n", sumList(list, 10));

	printf("가장 큰 수는 %d\n", maxList(list, 10));
	
	printf("탐색할 값은?");
	scanf("%d", &value);

	keyIndex = indexSearch(list, 10, value);

	if (indexSearch(list, 10, value) == -1)
		printf("값 %d를 갖는 첫번째 값은 없습니다.\n",value);
	else
		printf("값 %d를 갖는 첫번째 값은 %d번째에 있습니다.\n", value,keyIndex+1); //또 indexSearch(list, 10, value)+1 이렇게 계산하지 말고 앞에 keyIndex라고 선언하면 좋음
}
int sumList(int arr[], int size) //배열 정의해줄때 []필요
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