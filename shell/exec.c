#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int numOfArgs,char ** args){

execl("/cdev/shell/args","/cdev/shell/args","Hello","Dimitri","Pankov",(char*)0);

char * ptp[] = {"/cdev/shell/args","pointer","to pointer","is cool",(char*)0};

execv("/cdev/shell/args",ptp);

	return 0;
}
