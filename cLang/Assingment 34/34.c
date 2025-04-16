#include<stdio.h>
#include<string.h>
void p1()
{
char str[8]="sketch";
int i;
for(i=0;i<str[i];i++)
{};

printf("Length of the string is %d",i);

}
void p1_1()
{
  char a[10]="king";
  int len;
  len= strlen(a);
  printf(" string length is %d",len);

}
void p2()
{
    int i,count=0;
    char a[5]="kings";
    char given_chr;
    printf("Enter a character :");
    scanf("%c",&given_chr);
   for(i=0;i<=4;i++)
   {
    if(a[i]==given_chr)
    count++;
   }
   printf("The character %c is %d times.",given_chr,count);
}
void p3()
{
    int j,count= 0;
    char str[5];
    printf("Enter a string:");
    fgets(str,5,stdin);
   char a,e,i,o,u;
   for(j=0;j<=4;j++)
   {
    if(str[j]==a||str[j]==e||str[j]==i||str[j]==o|| str[j]==u)
        count++;
   }
printf("Total vowels are %d",count);

}
void p4()
{
    int i,count=0;
    char a[10];
    printf("Enter a string:");
    fgets(a,10,stdin);
    for(i=0;i<=9;i++)
    {
        if(a[i]==32)//ascii code of space is 32.
        count++;
    }
    printf("Total number of spaces are %d",count);
}
void p5()
{

int i;
char a[10];
printf("Enter a string");
fgets(a,10,stdin);
a[strlen(a)-1]=='\0';

for(i=0;a[i];i++)
{
    if(a[i]>='a' && a[i]<='z')
    a[i]-=32;
}
printf("%s",a);

}

int main()
{
    p5();
    return 0;
}