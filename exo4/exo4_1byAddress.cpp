#include <iostream>
#include <string>
using namespace std;

struct Product {
    string code;
    double weight, price;
};

void update(Product* M, const string& code, double weight, double price) {
    M->code = code;
    M->weight = weight;
    M->price = price;
}

void display(Product* M) {
    printf("code: %s\n", M->code.c_str());
    printf("weight: %.2f\n", M->weight);
    printf("price: %.2f DA\n", M->price);
}

int main() {
    Product M1;  
    Product M2;  
    

    printf("Product 1\n");

    update(&M1, "xzqqq", 55, 80);
    printf("When initialized:\n");
    display(&M1);
    

    update(&M1, "xzss", 80, 80);
    printf("When modified:\n");
    display(&M1);
    
    printf("---------------------------\n");

    printf("Product 2\n");
    // Initialize
    update(&M2, "xdsdq", 66, 20);
    printf("When initialized:\n");
    display(&M2);
    

    update(&M2, "xsdsdd", 84, 40);
    printf("When modified:\n");
    display(&M2);

    return 0;
}
