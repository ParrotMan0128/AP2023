#include <stdio.h>

int main() {

	int a, b;

	printf("2���� ������ �Է��ϼ���.\n");

	printf("���� 1 : ");
	scanf("%d", &a);

	printf("���� 2 : ");
	scanf("%d", &b);

	printf("�� �� ���� ���� %d�Դϴ�.\n", a + b);
	printf("�� �� ���� ���� %d�Դϴ�.\n", a - b);
	printf("�� �� ���� ���� %d�Դϴ�.\n", a * b);
	printf("�� �� ���� ���� %d�Դϴ�.\n", a / b);

	return 0;

}