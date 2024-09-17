#include <stdio.h>

int beginning, last;

int main(){
    printf("Please enter the beginning integer: ");
    scanf("%d", &beginning);
    printf("Please enter the last integer: ");
    scanf("%d", &last);
    printf("All the numbers that can be divided by 13 are: \n");
    for(int i = beginning; i <= last; i++){
        if(i % 13 == 0){
            printf("%d \n", i);
        }
    }
    printf("Bye!!");

    return 0;
}