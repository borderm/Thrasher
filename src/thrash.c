#include <stdlib.h>
#include <stdio.h>

// For the love of god do not run this, it's not far off from a fork bomb.
// For the record in under 5 seconds it allocated 6 GiB on my Windows machine.

// TODO: take user input to determine how much to allocate at a time

int main(){
    char state = 1;
    while (state){
        malloc(32); //Originally 1024, but the process kept getting killed on my pi
    }
    return 0;
}