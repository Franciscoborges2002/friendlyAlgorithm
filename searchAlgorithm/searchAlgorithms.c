/*Seach Algorithms menu 
/*Nothing to pass to the function
/*Nothing to return to the previous function
*/
void searchAlgorithmsMenu(){
    int res=0;

    printf('So you want to learn about search Algorithms.\n Here\'s a list of some of them:');
    printf('1.Linear Search;');

    scanf("%d", &res);

    while(res<0 || res>3){
        printf('Don\'t got that option. Try again; ');
        scanf("%d", &res);
    }
}

/*Linear Search
/*Nothing to pass to the function
/*Nothing to return to the previous function
*/
void linearSearch(){
    
}