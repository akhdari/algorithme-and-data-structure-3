#include <iostream>
using namespace std;


void initializeMatrices(int A[10][10],int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
           printf("enter the element of ligne %d, column %d:", i,j);
           scanf("%d", &A[i][j]);
        }
    }
}

void sumMatrices(int A[10][10], int B[10][10],int size,  int result[10][10]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void productMatrices(int A[10][10], int B[10][10], int size, int result[10][10]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int countNullValues(int A[10][10], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (A[i][j] == 0) {
                count++;
            }
        }
    }
    return count;
}

void swapMinMax(int A[10][10], int B[10][10], int size) {
    int minA = A[0][0], maxB = B[0][0];
    int minAIndexRow = 0, minAIndexCol = 0, maxBIndexRow = 0, maxBIndexCol = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (A[i][j] < minA) {
                minA = A[i][j];
                minAIndexRow = i;
                minAIndexCol = j;
            }
            if (B[i][j] > maxB) {
                maxB = B[i][j];
                maxBIndexRow = i;
                maxBIndexCol = j;
            }
        }
    }

    // Swap the minimum value of A with the maximum value of B
    int temp = A[minAIndexRow][minAIndexCol];
    A[minAIndexRow][minAIndexCol] = B[maxBIndexRow][maxBIndexCol];
    B[maxBIndexRow][maxBIndexCol] = temp;
}

void displayMatrix(int matrix[10][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int size, A[10][10], B[10][10], result[10][10], nullCountA, nullCountB;
    //
    printf("enter size of both matrices A and B:");
    scanf("%d",&size);
    printf("A:\n");
    initializeMatrices(A, size);
    printf("B:\n");
    initializeMatrices(B, size);

    // Display matrices A and B
    printf("A:\n");
    displayMatrix(A, size);
    printf("B:\n");
    displayMatrix(B, size);
    
    // Sum matrices
    sumMatrices(A, B, size, result);
    printf("Sum of A and B:\n");
    displayMatrix(result, size);
    
    // Product of matrices
    productMatrices(A, B, size, result);
    printf("Product of A and B:\n");
    displayMatrix(result, size);
    
    // Count null values
    nullCountA = countNullValues(A, size);
    nullCountB = countNullValues(B, size);
    printf("null values in A: %d", nullCountA);
    printf("\n");
    printf("null values in B: %d", nullCountB);
    printf("\n");
    
    
    // Swap min/max
    swapMinMax(A, B, size);
    printf("Matrix A after swapping min and max:");
    displayMatrix(A, size);
    cout << "Matrix B after swapping min and max: " << endl;
    displayMatrix(B, size);
    
    return 0;
}