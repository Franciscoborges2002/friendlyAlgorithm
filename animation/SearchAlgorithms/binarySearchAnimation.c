//Function to make the animation to the binary Search explanation
#include "../../generalFunctions.c"

void binarySearchAnimation(){


    printHeader();
    printFirstStep();
    mediumWait();
    clean();

    printHeader();
    printSecondtStep();
    mediumWait();
    clean();

}

//Funtion to print header
void printHeader(){
    printf("Array: [10 15 20 25 30 35 40]\n");
    printf("Value2Find: 15\n");
    printf("------------------------------");
}

void printFirstStep(){
    printf("Array: [10 15 20 25 30 35 40]\n");
    printf("        0        ^        7\n");
    printf("        |        |        |\n");
    printf("                  25 != 15\n");
    printf("15<25;");
    printf("The new Interval is between 0 and 3");
}

//Check to see what's here
void printSecondtStep(){
    printf("Array: [10 15 20 25 30 35 40]\n");
    printf("        0        3\n");
    printf("        |        |\n");
    printf("         25 != 15\n");
    printf("15<25;");
    printf("The new Interval is between 0 ad 3");
}