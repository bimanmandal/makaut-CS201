/*

    return_type function_name(parametertype parametername, parameter_type parameter_name) {
        return type;
    }


    int main(){
        return 0;
        return 'a';  // error
    
    }

    return_type: int
    function_name: main
    parameters: no parameters

    paste mixerGrinder(jeera, ada, rasoon, electricity){

        return paste;
    }

    sum

    return_type function_name(parametertype parametername, parameter_type parameter_name) {
        return type;
    }
    int sum(int a, int b){
        int result;
        result = a + b;
        return result;
    }



*/


#include<stdio.h>

// Function with two parameters, return type int
// Function Defination
int sum(int num1, int num2){
    int result;
    result = num1 + num2;
    return result;
}

// Function with 0 parameter, return type int
int main(){
    int a , b, result;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    // Function calling
    result = sum(a,b);
    printf("Result is %d\n", result);
    result = sum(a,10);
    printf("Result is %d\n", result);
    result = sum(a,20);
    printf("Result is %d\n", result);
    result = sum(20,b);
    printf("Result is %d\n", result);
    result = sum(a,30);
    printf("Result is %d\n", result);
    return 0;

}