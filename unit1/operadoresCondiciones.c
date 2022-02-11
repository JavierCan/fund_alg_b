   #include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>

///temperaura con condiciones////
////frio: 16/////////
/////caliente : 29////


int frio = 16;
int caliente = 29;
int sofa = 7000;



   int main (int argc, char** argv){
    int inputTemp =_atoi (argv[1]);
    int inputMoney =_atoi (argv[2]);
    char inputName = argv[3][0]; ///-----> "F"----- > {}
    bool Tem_condition = (inputTemp == frio );
    bool Tempcondition2 =(inputTemp == caliente);
    bool Temp_condition3 = (inputTemp >= caliente);
    bool canRobotMove = (inputTemp <= caliente);
    bool hasUserMoney = (inputMoney >= sofa);
    bool isUserFamele = (  inputName == 'f');


    if (!canRobotMove== true){
        //Robot.Move( X_coord, ycoord)
    }else {
        //////Robot.stop (x_coord, y_coord)
    
    if (hasUserMoney){
    }else {


    }
    
    return 0;
   } 