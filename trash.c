#include <stdio.h>

int init(){
    // create init file
    //      location of trash
    //      length of time     

    return 0;
}   

int remove(){
    // check permission
    // execute command
    // return value
    
    return 0;
}

int main(int argc, char** argv){
    if(argc <= 1){
        printf("trash: missing operand[s]\n");
    }
    for(int i = 1; i < argc; i++){
        printf("%s\n", argv[i]);
    }
}

