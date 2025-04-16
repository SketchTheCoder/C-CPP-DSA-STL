//take 5 subject marks from user and assume marks are given from 100 and passing marks are 33 now check whether he passed examination or not.
#include<stdio.h>
int main()
{
int eng,bio,chem,math,phy;
printf("Enter marks of five subjects:");
scanf("%d%d%d%d%d",&eng,&bio,&chem,&math,&phy);

if(eng>=33 && bio>=33 && chem>=33 && math>= 33 && phy>=33)
{

printf("He has passed the  examination");
}

else{

printf("He has failed the examination");

}
return 0;

}