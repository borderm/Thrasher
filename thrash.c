#include <stdlib.h>
#include <stdio.h>

//For the love of god do not run this, it's not far off from a fork bomb

//TODO: take user input to specify how much to allocate at a time

int main(){
    char state = 1;
    while (state){
        malloc(32); //Originally 1024, but the process kept getting killed on my pi
    }
    return 0;
}