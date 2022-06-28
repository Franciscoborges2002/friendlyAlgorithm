#include <stdio.h>
#include "../animation/SearchAlgorithms/linearSearchAnimation.h"

/*Linear Search
/*Nothing to pass to the function
/*Nothing to return to the previous function
*/
void linearSearch(){
    int exa = -1;
    printf("So what exactly is the linear search?");
    printf("It's the most rudimentary method to do a search.\nWe start in the index 0 of the array.\nWe pass through all the indexes cheking if it's or not the number we are searching for.\nIf the number doesn't exist in the array the function must return -1.\nIf exists in the array we return the index of the number.");
    printf("Do you want an example?(Yes: 1, No:0)");
    scanf("%d", &exa);

    while(exa < 0 || exa > 1){
        printf("Didn't understood. Do you want an example?(Yes:1, No:0)");
        scanf("%d", &exa);
    }

    if(exa == 0){
        return;
    }else{
        printf("Here's our Array: [10 15 20 25 30 35 40]");
        printf("                   0   1   2   3   4   5   6");
        printf("Here's our x: 25\n");
        printf("Steps:");
        printf("1.Check if the number is in Array[0] -> It is not.");
        printf("2.Check if the number is in Array[1] -> It is not.");
        printf("3.Check if the number is in Array[2] -> It is not.");
        printf("4.Check if the number is in Array[3] -> It is in index 3.");
        printf("5.Return the index 3.");
    }
}

void binarySearch(){
    int exa = -1;

    printf("So what exactly is the binary search?\n");
    printf("To proprely use this method you need to have the array ordered.\n");
    printf("This method we are going to take the index that is in the middle of the array.\nThen we need to check if the value in this index is greater of smaller than the value that we want.\nIf is greater we pick the second half of the interval that we were. if it was smaller we take the other half.\nAnd we repeat the process untill we get the value and return the index.\nIf the value that we are trying to find isn't in the array we just need to return -1.");
    printf("Do you want an example?(Yes: 1, No:0)");
    scanf("%d", &exa);

    while(exa < 0 || exa > 1){
        printf("Didn't understood. Do you want an example?(Yes:1, No:0)");
        scanf("%d", &exa);
    }

    if(exa == 0){
        return;
    }else{
        /*Make the steps;*/
    }
}

void searchAlgorithmsMenuOptions(){
	printf("So you want to learn about search Algorithms.\nHere\'s a list of some of them:");
    printf("\n1.Linear Search;");
    printf("\n2.Binary Search;");
	printf("\n0.Return;");
	printf("\n->");
}

/*Seach Algorithms menu 
/*Nothing to pass to the function
/*Nothing to return to the previous function
*/
void searchAlgorithmsMenu(){
    int res=0;
    clean();
    searchAlgorithmsMenuOptions();
    
    scanf("%d", &res);

    while(res<0 || res>3){
        printf("Don\'t got that option. Try again; ");
        scanf("%d", &res);
    }

	switch(res){
    	case 0:
    		return;
    	break;
        case 1://Search Algorithms
			linearSearch();
        break;
        case 2://Search Algorithms
			binarySearch();
        break;
    }
/*
    if(res == 1){
        linearSearch();
    }else if(res == 2){
        binarySearch();
    }*/
}
