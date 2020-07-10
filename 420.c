#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>




void vuln(){

    char buff[32];
    printf("Ingrese input\n");
    read(0, buff, 64);
    
}

void main(){

   vuln();
}