#include <stdio.h>
#include <stdbool.h>


int main(int argc, char ** argv){

    int n;
    scanf ("%d", &n);
    bool notHasReminder = ( n % 2 == 0);

    if (notHasReminder){
        printf("the number %d is even \n", n);
    } else {
        printf("the number %d is odd \n", n);
    }
    
    return 0;
}