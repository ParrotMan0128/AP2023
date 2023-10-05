#include <stdio.h>

int odd(int v);

int main(void) {

    int s;

    printf("입력할 수: ");
    scanf("%d", &s);

    int v, odd_numbers;

    for (int i = 0; i < s; i++) {

        scanf("%d", &v);
        odd_numbers = odd(v);

    }

    printf("입력한 홀수의 수는 %d\n", odd_numbers);

    return 0;
    
}

int odd(int v) {

    static int count = 0;

    if (v % 2 == 1) {

        count++;

    }

    return count;

}