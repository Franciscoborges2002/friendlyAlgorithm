#include <stdio.h>
#include <Windows.h>

/*Main function
/*Nothing to pass to the function
/*Return 0: sucess finish, other returns will return 1-
*/
int main(){
    //Welcome 
    printf('Welcome to friendAlgorithm!\nA place to learn how algorithms work and a view to they working.\n');
    sleep(5);

    int learn = mainMenu();

    switch(learn){
        case 1://Search Algorithms

        break;
    }

    return 0;
}


/*Main menu Function
/*Nothing to pass to the function
/*Return the value of the Algorithm in the menu
*/
int mainMenu(){
    int res= 0;

    printf('What do you want to learn:');
    printf('1.Search Algorithms');

    scanf("%d", &res);

    while(res<0 || res>3){
        printf('Don\'t got that option. Try again: ');
        scanf("%d", &res);
    }

    return res;
}