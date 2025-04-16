//take cost price and selling price tell profit or loss perecntage.
#include<stdio.h>
int main()
{
int cp,sp;
printf("Enter the cost price and selling price:");
scanf("%d%d",&cp,&sp);

if(sp-cp>0)
{

printf("Profit of %f percent ",(sp-cp)*100.0/cp);

}
else if(sp-cp<0)
{

printf("Loss of %f percent",(sp-cp)*100.0/cp);

}
else{

  printf("No profit no loss.");  
}

return 0;
}