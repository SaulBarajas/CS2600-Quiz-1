#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    float soup = 4.55;
    float sandwich = 13.25;
    float salad = 9.95;
    float pizza = 22.35;
    float meals[] = {soup, sandwich, salad, pizza};

    float taxPercent = atof(argv[1]);
    float taxTotal;
    float tipPercent = atof(argv[2]);
    float tipTotal;
    float costTotal;

    printf("\nYou entered %.2f percent", taxPercent);
    printf("\nYou entered %.2f percent", tipPercent);

    srand(time(NULL));
    int randMeal = rand() % 4;
    taxTotal = (taxPercent/100) * meals[randMeal];
    tipTotal = (tipPercent/100) * meals[randMeal];
    costTotal = tipTotal + taxTotal + meals[randMeal];
    printf("\nThe cost of the meal is: $%.2f", meals[randMeal]);
    printf("\nThe tax amount for this meal is: $%.2f", taxTotal);
    printf("\nThe tip total for this meal is: $%.2f", tipTotal);
    printf("\nThe total bill comes out to: $%.2f", costTotal);


    return 0;
}
