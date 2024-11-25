#include <iostream>
#include <string>
using namespace std;
//structure declaration
struct Product{
    string code;
    double weight, price;
};
// update function: alternative of both initialize and modify
void update (string code, double weight, double price, Product& M ){
    M.code = code;
    M.weight = weight;
    M.price = price;
}
// display
void display (Product& M){
    printf("code:%s\n", M.code.c_str());
    printf("weight:%.2f\n", M.weight);
    printf("price:%.2f DA\n",M.price);
}
int main() {
   Product M1 =  Product();
Product M2 =  Product();
    string code;
    double weight, price;
   //product 1
        printf("Product 1\n");
        //initialize
        update("xzqqq", 55 , 80, M1);
        printf("when initialized:\n");
        display(M1);
        //modify
        update("xzss", 80 , 80, M1);
        printf("when modified:\n");
        display(M1);
        printf("---------------------------\n");
    //product 2
         printf("Product 2\n");
        //initialize
        update("xdsdq", 66 , 20, M2);
        printf("when initialized:\n");
        display(M2);
        //modify
        update("xsdsdd", 84 , 40, M2);
        printf("when modified:\n");
        display(M2);
}