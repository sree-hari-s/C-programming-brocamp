#include <stdio.h>
void printName(char* name,int count) 
{ 
    printf("%s\n",name); 
    count+=1; 
    if(count<8) 
        printName(name,count); 
} 
void main() 
{ 
    char name[]="Crossroads";
    printName(name,0); 
}