#include<stdio.h>
#include<string.h>
void p1()
{
    int i;
    char a[50];
    printf("Enter a string:");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    for(i=0;a[i];i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        a[i]+=32;
    }
    printf("%s",a);
}
void p2()
{
    int i,L;
    char a[50],ch;
    printf("Enter a string:");
    fgets(a,50,stdin);
    L=strlen(a);
for(i=0;i<=L/2;i++)
{
    ch=a[i];
    a[i]=a[L-1-i];
    a[L-1-i]=ch;
}                                             
printf("After reverse %s",a);
}
void p3()
{
    
    int i,alpha=0,digit=0,other=0;
    char a[50];
    printf("Enter a string:");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';

for(i=0;a[i];i++)
{
    if(a[i]>='a' && a[i]<='z')
    alpha++;
    else if (a[i]>='A' && a[i]<='Z')
    alpha++;
    else if(a[i]>='0' && a[i]<='9')
    digit++;
    else
    other++;
}
printf("Total alphabest are %d and digits are %d and special character are %d",alpha,digit,other);
}

void p4()
{
    int i;
    char a[5]="tina", b[5];
     for(i=0;i<=4;i++)
     {
        b[i]=a[i];
     }
     printf("%s",b);
}
void p5()
{
    int i;
    char a[50],chr;
    printf("Enter a string:");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
printf("Enter a character:");
scanf("%c",&chr);
for(i=0;a[i];i++)
{
    if(a[i]==chr)
    printf("First occurance is at %d",i+1);
}
    
     if(a[i]=='\0')
    printf("Character not found");

}
int main()
{
    p5();
    return 0;
}