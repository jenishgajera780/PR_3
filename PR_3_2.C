// PR2 Q2 write a program to count the total number of digit in a number.

#include<stdio.h>
#include<conio.h>

void main(){
int j,e;

e = 0;

printf("please type any number : ");
scanf("%d",&j);

while(j!=0){
j=j/10;
e++;

} 

printf("__________________\n");
printf("this digit is : %d\n",e);
printf("~~~~~~~~~~~~~~~~~~");

getch();

}
