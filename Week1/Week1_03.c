#include <stdio.h>

int main() {

	int x, y, z, result;

	printf("3���� ������ �Է��ϼ���.\n");

	printf("���� 1 : ");
	scanf("%d", &x);

	printf("���� 2 : ");
	scanf("%d", &y);

	printf("���� 3 : ");
	scanf("%d", &z);

	result = x + y - z;

	printf("�� �� ���� ��� ����� %d�Դϴ�.\n", result);

	return 0;

}