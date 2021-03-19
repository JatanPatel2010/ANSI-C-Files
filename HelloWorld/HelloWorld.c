#include <stdio.h>
#include <stdlib.h>


int main(){

    char Line[2083];
    char Line_2[12083];
    FILE * fpointer = fopen("c-generated-file.txt", "r");

    fgets(Line, 2083, fpointer);
    fgets(Line_2, 12083, fpointer);
    printf("%s", Line);
    printf("%s", Line_2);

    fclose(fpointer);
    return 0;

}



