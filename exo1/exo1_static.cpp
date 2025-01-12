#include <iostream>
#include <cstdio>
int fill_array() {
int x;
scanf("%d", &x);
return x;
}
void print_array(int length_X, int X[]) {
printf("Array elements: ");
for (int i = 0; i < length_X; i++) {
printf("%d ", X[i]);
}
printf("\n");
}

void merge_array(int A[], int length_A, int B[], int length_B, int C[]) {
for (int i = 0; i < length_A; i++) {
C[i] = A[i];
}
for (int j = 0; j < length_B; j++) {
C[j + length_A] = B[j];
}
}

int main() {
int A[10];
int B[10];
int C[20];
int length_A, length_B;
printf("Program that allows merging 2 arrays A and B\n");
printf("Enter the length of array A: ");
scanf("%d", &length_A);
printf("Enter the length of array B: ");
scanf("%d", &length_B);
// Fill array A
printf("Fill array A:\n");
for (int i = 0; i < length_A; i++) {
printf("Enter element: ");
A[i] = fill_array(); // Fill the array using the fill_array function
}
// Fill array B
printf("Fill array B:\n");
for (int i = 0; i < length_B; i++) {

printf("Enter element: ");
B[i] = fill_array(); // Fill the array using the fill_array function
}
// Merge arrays A and B into C
merge_array(A, length_A, B, length_B, C);
// Print the merged array C
printf("Merged array C:\n");
print_array(length_A + length_B, C);
return 0;
}
