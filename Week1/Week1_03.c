#include <stdio.h>

int main() {

	int x, y, z, result;

	printf("3개의 정수를 입력하세요.\n");

	printf("정수 1 : ");
	scanf("%d", &x);

	printf("정수 2 : ");
	scanf("%d", &y);

	printf("정수 3 : ");
	scanf("%d", &z);

	result = x + y - z;

	printf("이 세 값의 계산 결과는 %d입니다.\n", result);

	return 0;

}