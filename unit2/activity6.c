#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libraries/utils.h"


int main (int argc, char** argv){ ///"ativity6", "10", "20"
                                   // 0            1     2   //
printf("argv [1]:%s   argv [2]: %s \n", argv [1], argv[2]);

int rango1 = atoi (argv [1]);
int rango2 = atoi (argv[2]);
for (int i = 1; i<=rango1; i++){
int number = i;
bool individedbyto = (number % 2 == 0);
printf("iterator : %d\n", i);
if (individedbyto)  printf("even number : %d\n", number);
}
printf ("while solution!!\n");
int i = 1;
while (i <=rango2){
printf ("it : %d\n", i);
    i = 1+1;

}



    return 0;
}
// 



