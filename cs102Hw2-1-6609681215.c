#include <stdio.h>

float mother, father, avrheight, lowheight, highheight;

int main(){
    printf("Enter the height of the mother (centimeters): ");
    scanf("%f", &mother);
    printf("Enter the height of the father (centimeters): ");
    scanf("%f", &father);
    avrheight = (mother + father) / 2;
    lowheight = avrheight - 13.5;
    highheight = avrheight + 13.5;
    printf("The possible height of the child is between %.2f and %.2f centimeters", lowheight, highheight);
}