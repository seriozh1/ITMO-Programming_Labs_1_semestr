#include <stdio.h>
#include <locale.h>

const int N = 7;

int main() {
	//Вариант 12


	int a2[] = {23, 5678, 2, 564, 365, 77, 443};

	printf("--1--\n");
	for (int i = 0; i < N; ++i) {
        printf("%d ", a2[i]);
	}

	printf("\n--2--\n");
    int a[2][2] = {{1, 1},{1, 4}};
    int b[2][2] = { {1, 2}, {4, 1} };
    int c[2][2];
    printf("\n!!! %d !!\n", b[0][1]);
    c[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0];
    c[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1];
    c[1][0] = a[1][0]*b[0][0] + a[1][0]*b[1][0];
    c[1][1] = a[1][0]*b[1][0] + a[1][1]*b[1][1];

    printf("%d %d\n%d %d", c[0][0], c[0][1], c[1][0], c[1][1]);

	return 0;
}