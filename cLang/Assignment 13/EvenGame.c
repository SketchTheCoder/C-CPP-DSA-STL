// class question 1
#include<stdio.h>
int Q1()
{
int chanceno, numb;

for(chanceno=1;chanceno<=3;chanceno++)
{
printf("Enter a even number:");
scanf("%d",&numb);
if(numb%2==0)
  break;
}
if(chanceno==4)
printf("Game Over");
else
{
    printf("You Win");
}
return 0;


}
//class queston 2
#include<stdio.h>
int main()
{
int N,sum=0;
for(;;)
{
  printf("enter a number:");
  scanf("%d",&N);
  if(N==0)
   break;
else{
  printf("%d\n",sum+=N);
}
}
return 0;
}