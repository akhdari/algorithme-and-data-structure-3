#include <iostream>
#include <cstdio>

void read_array(int* X, int length_X) {
for (int i = 0; i < length_X; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &X[i]);
}
}

int Min(int* T, int length_T) {
int min = T[0];
for (int i = 1; i < length_T; i++) {
if (T[i] < min) {
min = T[i];
}
}
return min;
}

int Max(int* T, int length_T) {
int max = T[0];
for (int i = 1; i < length_T; i++) {
if (T[i] > max) {
max = T[i];
}
}
return max;

}
int main() {
int* A = new int[10];
int length_A = 10;
read_array(A,length_A);
printf("Minimum value in the array: %d\n", Min(A, length_A));
printf("Maximum value in the array: %d\n", Max(A, length_A));
return 0;
}