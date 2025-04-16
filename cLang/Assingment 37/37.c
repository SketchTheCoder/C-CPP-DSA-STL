#include<stdio.h>
#include<string.h>
int vowel_count(char a[])
{
    char v[]="aeiouAEIOU";
    int i,j,count =0;
    for(i=0;a[i];i++)
    {
        for(j=0;v[j];j++)
        if(a[i]==v[i])
        {count++;
        break;
        }
    }
return count;
}
int find_index(char a[],char chr)
{
int i;
for(i=0;a[i];i++)
{
    if(a[i]==chr)
    return i;
   
}
if(a[i]!=chr)
return -1;
}
int find_char_in_specified_index(char a[],char chr,int startingIndex, int endingIndex)
{
int i;
for(i=startingIndex;a[i]&& i<endingIndex;i++)
{
    if(a[i]==chr)
    return i;
   
}
if(a[i]!=chr)
return -1;
}
char* swapchar(char a[], int i, int j)
{
    char ch;
    if(i<strlen(a)&& j<strlen(a))
    {
       ch=a[i];
       a[i]=a[j];
       a[j]=ch;
    }
    return a;
}
int alphanumeric(char a[])//Alphanumeric must have atleast one digit and one alphabet....
{
    int i,alpha =0, digit=0;
    for(i=0;a[i];i++)
    {
        if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
        alpha=1;

        else if(a[i]>='0'&& a[i]<='9')
        digit=1;
        
    }
    if(alpha && digit)
    return 1;

    else
    return 0;
}


int main()
{
    char a[]="sketch";
    a[strlen(a)-1]='\0';
    printf("%d",alphanumeric(a));
    return 0;

}