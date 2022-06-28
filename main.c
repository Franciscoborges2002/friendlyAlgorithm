#include <stdio.h>
#include <Windows.h>
#include "generalFunctions.h"
#include "./searchAlgorithm/searchAlgorithms.h"

/*Main function
/*Nothing to pass to the function
/*Return 0: sucess finish, other returns will return 1-
*/
int main(){
    //Welcome 
    printf("Welcome to friendAlgorithm!\nA place to learn how algorithms work and a view to they working.");
    //startWait();
    fastWait();
    clean();

    int learn = mainMenu();

    switch(learn){
    	case 0:
    		printf("bey bey");
    		fastWait();
    		return 0;
    	break;
        case 1://Search Algorithms
			searchAlgorithmsMenu();
        break;
    }

    return 0;
}


/*Main menu Function
/*Nothing to pass to the function
/*Return the value of the Algorithm in the menu
*/

void mainMenuOptions(){
	printf("What do you want to learn?");
    printf("\n1.Search Algorithms.");
    printf("\n0.Leave");
    printf("\n-> ");
}

int mainMenu(){
    int res= 0;

	mainMenuOptions();

	fseek(stdin,0,SEEK_END);//clean the buffer
    scanf("%d", &res);

    while(res<0 || res>3){
    	clean();
    	fseek(stdin,0,SEEK_END);
        printf("Don\'t have that option.\n");
        mainMenuOptions();
        scanf("%d", &res);
    }

    return res;
}
