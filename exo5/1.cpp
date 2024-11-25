#include <iostream>
struct MinResult{
    int temp;
    int indexI;
    int indexJ;
};
MinResult min(int T[3][3]){
    int temp =T[0][0];
    int indexI=0;
    int indexJ=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            if(T[i][j]<temp){
                temp=T[i][j];
                indexI=i;
                indexJ=j;
            }
        }
    }
        return {temp, indexI, indexJ};

};

void swapMinResults (MinResult& minResultA, MinResult& minResultB){
    int temp;
    temp=minResultA.temp;
    minResultA.temp=minResultB.temp;
    minResultB.temp=temp;
};

int main() {
    MinResult minResultA;
    MinResult minResultB;
    
    int minA, minB,indexI_A, indexJ_A, indexI_B, indexJ_B;
     int A[3][3] = {
        {1, 2, 3},
        {33, 5, 6},
        {7, 8, 9}
    };
     int B[3][3] = {
        {1, 44, 0},
        {4, 2, 6},
        {7, 2, 9}
    };
minResultA= min(A);
minResultB= min(B);
minA=minResultA.temp;
indexI_A=minResultA.indexI;
indexJ_A=minResultA.indexJ;
minB=minResultB.temp;
indexI_B=minResultB.indexI;
indexJ_B=minResultB.indexJ;
printf("A:\n");
printf("Min A:%d \n",minA);
printf("indexI:%d \n",indexI_A);
printf("indexJ:%d \n",indexJ_A);
printf("B:\n");
printf("Min:%d \n",minB);
printf("indexI:%d \n",indexI_B);
printf("indexJ:%d \n",indexJ_B);
printf("after switch:\n");
swapMinResults( minResultA,minResultB);
printf("Min A:%d \n",minResultA.temp);//minA and minB are local variables
printf("Min B:%d \n",minResultB.temp);


    return 0;
}