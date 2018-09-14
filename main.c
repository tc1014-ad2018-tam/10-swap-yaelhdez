//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>

//--------------------------------------------------ORDER FUNCTION-------------------------------------------------------
double order (double *n1, double *n2) {
    double change;

    if(*n1 > *n2) { //This if compare the numbers to order it
        change = *n1; //storage the value of "n1" on a intermediary variable
        *n1 = *n2; //storage the value of "n2" on "n1"
        *n2 = change; //storage the value of the intermediary variable ("change") on "n2"
    }
}
//--------------------------------------------------MAIN FUNCTION-------------------------------------------------------
int main() {
    double num1, num2, num3; //Declaration of variables
    printf("Welcome, this program will help you to order 3 numbers ascending\n");
    printf("enter the number 1\n");
    scanf("%lf", &num1); //Number 1 request
    printf("enter the number 2\n");
    scanf("%lf", &num2); //Number 2 request
    printf("enter the number 3\n\n");
    scanf("%lf", &num3); //Number 3 request

    order(&num1, &num2); //Function order call using the variables num1 and num2
    order(&num1, &num3); //Function order call using the variables num1 and num3
    order(&num2, &num3); //Function order call using the variables num2 and num3

    printf("The order is the next: %lf , %lf , %lf", num1, num2, num3); //Output

    return 0;
}
