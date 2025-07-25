// WAP to copy a string
#include<stdio.h>
int main() {
    char c1[150], r1[150];
    printf("Enter a string : ");
    fgets(c1, sizeof(c1), stdin);
    
    int i;
    /*
    for (i = 0; c1[i] != '\0'; i++){
        r1[i] = c1[i];
    }
    */

    // using while loop
    i=0;
    while(c1[i] != '\0'){
        r1[i] = c1[i];
        i++;
    }

    r1[i] = '\0';

    printf("Copied string is : %s\n",r1);

    return 0;
}