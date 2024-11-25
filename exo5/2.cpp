#include <cstdio>

struct MinResult {
    int temp;
    int indexI;
    int indexJ;
};

MinResult min(int (*ptrT)[3]) {
    int temp = ptrT[0][0];
    int indexI = 0;
    int indexJ = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (ptrT[i][j] < temp) {
                temp = ptrT[i][j];
                indexI = i;
                indexJ = j;
            }
        }
    }
    return {temp, indexI, indexJ};
}

void swapMinResults(MinResult& minResultA, MinResult& minResultB) {
    int temp = minResultA.temp;
    minResultA.temp = minResultB.temp;
    minResultB.temp = temp;
}

int main() {
    MinResult minResultA;
    MinResult minResultB;

    int A[3][3];
    int B[3][3];

    printf("Enter values for 3x3 matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter values for 3x3 matrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    minResultA = min(A);
    minResultB = min(B);

    printf("A:\n");
    printf("Min A: %d\n", minResultA.temp);
    printf("Index I: %d\n", minResultA.indexI);
    printf("Index J: %d\n", minResultA.indexJ);

    printf("B:\n");
    printf("Min B: %d\n", minResultB.temp);
    printf("Index I: %d\n", minResultB.indexI);
    printf("Index J: %d\n", minResultB.indexJ);

    printf("After switch:\n");
    swapMinResults(minResultA, minResultB);

    printf("Min A (after swap): %d\n", minResultA.temp);
    printf("Min B (after swap): %d\n", minResultB.temp);

    return 0;
}
