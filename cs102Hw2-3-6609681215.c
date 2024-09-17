#include <stdio.h>

int a, b, c;

int main(){
    char choice;
    
    printf("Do you want to find the smallest or largest number? <S/L> : ");
    scanf(" %c", &choice);
    
    if(choice == 'S'){
        printf("Enter 3 integers: ");
        scanf("%d %d %d", &a, &b, &c);
        
        if(a < b && a < c){
            printf("Smallest number: %d\n", a);
        }else if(b < c){
            printf("Smallest number: %d\n", b);
        }else{
            printf("Smallest number: %d\n", c);
        }
    }else if(choice == 'L'){
        printf("Enter 3 integers: ");
        scanf("%d %d %d", &a, &b, &c);
        
        if(a > b && a > c){
            printf("Largest number: %d\n", a);
        }else if(b > c){
            printf("Largest number: %d\n", b);
        }else{
            printf("Largest number: %d\n", c);
        }
    }else{
        printf("Invalid choice. Please enter S or L.\n");
    }
    
    return 0;
}