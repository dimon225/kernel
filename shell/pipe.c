#include <stdio.h>
#include <stdlib.h>


int main(int numOfArgs,char ** args){

FILE * pipe, * file;
char * command  = "ls -l";
char buffer[256];

if(!(pipe = (FILE*)popen(command,"r"))){
 perror("Error opening pipe");
 exit(1);
}

if(!(file =(FILE*) fopen("system","w"))){
 perror("Error creating file");
 exit(1);
}

while(fgets(buffer,sizeof buffer,pipe)){
  fprintf(file,"%s",buffer);
}
fflush(file);
close(file);
pclose(pipe);
return 0;
}
