#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv){

    printf("%d ", argc - 1);

    int sum = 0;
    for(int i = 0; i < (argc); i++){
        sum += atoi(argv[i]);
    }
    
    printf("%d\n", sum);

    return 0;
}