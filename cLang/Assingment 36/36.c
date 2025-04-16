#include<stdio.h>
#include<string.h>
int length_string(char a[])
{
    int i;
    for(i=0;a[i];i++);
    return i;
}
char* Reverse(char a[])
{
    int i,l;
    char chr;
    l=strlen(a);
    for(i=0;i<=l/2;i++)
    {
       chr=a[i];
       a[i]=a[l-1-i];
       a[l-1-i]=chr;
    }
    return a;
}
int compare(char a[], char b[])
{
    int i;
    if(strlen(a)!=strlen(b))
    return 0;

    for(i=0;a[i];i++)
     if(a[i]!=b[i])
    return 0;

    return 1;    
}
char* uppercase(char a[])
{

    int i;
    for(i=0;a[i];i++)
    {
   if(a[i]>='a' && a[i]<='z')
    a[i]-=32;
    }
    return a;
}
char* Lowercase(char a[])
{

    int i;
    for(i=0;a[i];i++)
    {
   if(a[i]>='A' && a[i]<='Z')
    a[i]+=32;
    }
    return a;
}
int main()
{
    char a[10]="kingop";
   printf("%d", length_string(a));
return 0;
}