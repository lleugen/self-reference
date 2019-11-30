#include<stdio.h>
int main(){
    FILE * source = fopen("self_reference.c", "r");
    fseek(source, 0, SEEK_END);
    long size = ftell(source);
    rewind(source);
    char content[size];
    long current = 0;
    while(EOF != fscanf(source, "%c", &content[current])){
        current++;
    }
    content[current] = '\0';
    printf("%s\n", content);
    return(0);
}