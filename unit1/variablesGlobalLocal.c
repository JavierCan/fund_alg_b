#include <stdio.h>
#include<stdlib.h>
//Global variables;
//create a variable: datatype namevariable= anydata; 
// DataTypes in c/c++/c#/php;
int UnEntero = 3;
float undecimal = 3.1416;
char* name = "javiercan";
char uncaracter ='M';
int temperatura ;// definiendo la variable
//////////////////////////7//////////


// global variables////
char* date = "02-02-22T10:25: 00z";
/////////////////////////



///ejecucion del programa///
int main(){
  date = "02-02-22T10:25: 00z";
    int hours = 22; //%d - %i
    float pi = 3.1416; /// %f
    char character = "c"; /// %c
    char*  name = "javier";//////%s
    int *  adress = 0xf85; ///%p
    hours = hours + 2;
    printf ("hours: %i\n", hours); 
    printf ("hello Data B %s\n", name);
    return 0;
} 