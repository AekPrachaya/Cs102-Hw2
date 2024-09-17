#include <stdio.h>

int a, b, c;

int main(){
    printf("Please enter length of each side of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c){
        printf("This is equilateral triangle\n");
    }else if(a == b || b == c || a == c){
        printf("This is isosceles triangle\n");
    }else{
        printf("This is scalene triangle\n");
    }
}