// PR3 Q1 write a program to print all alphabets from a to z by skipping 3 alphabets using do while loop.

#include<stdio.h>
#include<conio.h>

void main(){

char j;
clrscr();
printf("________________________________\n");
printf("A TO Z BY SKIPPING 3 ALPHABETS\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
for(j='A';j<='Z';j+=4)
{

printf("%c\n",j);
}

getch();
}