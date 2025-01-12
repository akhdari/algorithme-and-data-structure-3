#include <iostream>
#include <cstdio>
int fill_array() {
int x;
scanf("%d", &x);
return x;
}
void print_array(int length_X, int* X) {
printf("Array elements: ");
for (int i = 0; i < length_X; i++) {
printf("%d ", X[i]); // Correctly print each element
}
printf("\n");
}

void merge_array(int* A, int length_A, int* B, int length_B, int* C) {
for (int i = 0; i < length_A; i++) {
C[i] = A[i];
}
for (int j = 0; j < length_B; j++) {
C[j + length_A] =B[j];
}
}

int main() {
int* A = new int[10];
int* B = new int[10];
int* C = new int[20];
int length_A, length_B;
printf("Enter the length of array A: ");
scanf("%d", &length_A);
printf("Enter the length of array B: ");

scanf("%d", &length_B);
printf("Fill array A:\n");
for (int i = 0; i < length_A; i++) {
printf("Enter element: ");
A[i] = fill_array(); // Fill the array using the fill_array function
}
printf("Fill array B:\n");
for (int i = 0; i < length_B; i++) {
printf("Enter element: ");
B[i] = fill_array(); // Fill the array using the fill_array function
}
merge_array (A, length_A, B, length_B, C);
printf("Merged array C:\n");
print_array(length_A + length_B, C);
delete[] A;
delete[] B;
delete[] C;
return 0;
}
