#include <stdio.h>

int main(int argc, char** argv){
    if(argc <= 1){
        printf("trash: missing operand[s]\n");
    }
    for(int i = 1; i < argc; i++){
        printf("%s\n", argv[i]);
    }
}

