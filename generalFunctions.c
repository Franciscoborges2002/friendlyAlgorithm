#include <stdio.h>

void startWait(){
    sleep(5);
}

void slowWait(){
    sleep(2);
}

void mediumWait(){
    sleep(1);
}

void fastWait(){
    sleep(0,5);
}

void customWait(int time){
	sleep(time);
}

void clean(){
    system("cls");
}
