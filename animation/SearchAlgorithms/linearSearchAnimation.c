#include "../../generalFunctions.c"

/*Function to make the animation to the linearSearch example*/

//Main function
void linearSearchAnimation(){

    //First interaction
    printHeader();
    printFirstStep();
    mediumWait();
    clean();

    //Second interaction
    printHeader();
    printSecondStep();
    mediumWait();
    clean();

    //Third interaction
    printHeader();
    printThirdStep();
    mediumWait();
    clean();

    //Fourth interaction
    printHeader();
    printFourthStep();
    mediumWait();
    clean();

    //Fifth interaction
    printHeader();
    printFifthStep();
    mediumWait();
    clean();
}

//Funtion to print header
void printHeader(){
    printf("Array: [10 15 20 25 30 35 40]\n");
    printf("Value2Find: 30\n");
    printf("------------------------------");
}

//Print the steps to make
void printSteps(){
    printf("Steps:\n");
    printf("1. Verify if the number to find is in array index position 0. If it is return the index, if is not go to the next position.");
    printf("1. Verify if the number to find is in array index position 1. If it is return the index, if is not go to the next position.");
}

//Function to print the first step
void printFirstStep(){
    printf("Array: [10 15 20 25 30 35 40]\n");
    printf("        ^\n");
    printf("        |\n");
    printf("        10 != 30");
}

//Function to print the second step
void printSecondStep(){
    printf("Array: [10 15 20 25 30 35 40]\n");
    printf("        /  ^\n");
    printf("           |\n");
    printf("           15 != 30");
}

//Function to print the third step
void printThirdStep(){
    printf("Array: [10 15 20 25 30 35 40]\n");
    printf("        /  /  ^\n");
    printf("              |\n");
    printf("              20 != 30");
}

//Function to print the fourth step
void printFourthStep(){
    printf("Array: [10 15 20 25 30 35 40]\n");
    printf("        /  /  /  ^\n");
    printf("                 |\n");
    printf("                 25 != 30");
}

//Function to print the fifth step
void printFidthStep(){
    printf("Array: [10 15 20 25 30 35 40]\n");
    printf("        /  /  /  /  ^\n");
    printf("                    |\n");
    printf("                    30 == 30\n");
    printf("Return to the index: 4");
}