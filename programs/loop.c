#include<stdio.h>
// 1(0,0) x(0,1) x(0,2) x(0,3)
// 1(1,0) 2(1,1) x(1,2) x(1,3)
// 1(2,0) 2(2,1) 3(2,2) x(2,3)
// 1(3,0) 2(3,1) 3(3,2) 4(3,3)

int main() {
    int num;
    for (int i = 0;i <= 3; i++){
        for (int j = 0; j <= 3; j++) {
            if (i >= j){
                num = j + 1;
                printf("%d ", num);
            }
        }
        printf("\n");
       
    }
    return 0;
}