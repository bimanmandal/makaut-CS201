#include<stdio.h>


// Function with 0 parameter and return type int
int getNumber(){
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    return x;
}

// Function with 0 parameter and return type int
int getConstantNumber(){
    return 32;
}

// Function with 1 parameter and return type void
void printResult(int res) {
    printf("The result is %d \n",res);
}


int main(){
    int a,b,c;
    a = getNumber();
    b = getNumber();
    c = getNumber();
    printResult(a);
    printResult(b);
    printResult(c);


    return 0;
}