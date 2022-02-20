#include <stdio.h>
#include <stdbool.h>

int main (int argc, char * argv){
 if (argc % 2 == 0 )
 printf("the number %s,is even %d", argv[1],argc);
 else 
 printf("the number %s, is odd %d");
 return 0;

}