#include <stdlib.h>
#include <stdio.h>

int main(int numOfArgs,char ** args){

if(numOfArgs == 1){
    printf("%s\n","arguments needed");
    exit(1);
}
printf("1st arg: %s\n",args[1]);
printf("2nd arg: %s\n",args[2]);
printf("3rd arg: %s\n",args[3]);

	return 0;
}
