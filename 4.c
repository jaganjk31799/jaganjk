#include<stdio.h>
int main()
{
char v;
scanf("%c",&v);
if(((v>='a')&&(v<='z'))||((v>='A')&&(v<='Z')))
printf("its an alphabet");
else 
printf("its an character");
}
