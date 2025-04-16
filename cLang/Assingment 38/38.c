#include<stdio.h>
#include<string.h>
int Is_palindrome(char a[])
{
    int i,l;
    for(i=0;a[i];i++)
    l=strlen(a);
 for(i=0;i<=l/2;i++)
 if(a[i]==a[l-1-i])
     return 1;
 else    
 return 0;

}
char* trim(char a[])
{
    int i=0,j=0,k=0,count=0;
    for(k=strlen(a)-1;a[k]==' ';k--)
        count++;
   k=strlen(a);
   while(a[i]==' ' && a[i]!=0)
     i++;
   for(j=0;a[j+i];j++)
      a[j]=a[i+j];
  a[k-count-i]='\0'; 
    return a;
}
int count_words(char a[])
{
  int i,count=0;
  trim(a);
  for(i=0;a[i];i++)
  {
    if(a[i]==' ')
    {
        if(a[i]==a[i+1])
           continue;
     else    
    count++;
    }
  }
  return count+1;
}
char* reverse_word(char a[])
{
 int i,j,k,word_count;
 word_count=count_words(a);
 char s[word_count][50];//It is 2-d array having strings store in 1-d....
 for(i=0,j=0,k=0;a[i];i++,k++)
 {
  if(a[i]!=' ') 
        s[j][k];
   else
   {
    s[j][k]='\0';
    j++;
    k=-1;
   }     
   a[0]='\0';//first word gyab..
   for(j=word_count-1;j>=0;j--)
   {
    if(a[0]!='\0');
       strcat(a," ");//strcat is a predefined function to catinate string....
     strcat(a,s[j]);  
   }
  a[strlen(a)]='\0';
  return a;
 }
}
int Insenstive_comparsion(char s1[], char s2[])
{
int i;
for(i=0;s1[i];i++)
   if(s1[i]>='a' && s1[i]<='z')
   s1[i]-=32;

for(i=0;s2[i];i++)
   if(s2[i]>='a' && s2[i]<='z')
   s2[i]-=32;

for(i=0;s1[i]&&s2[i];i++)
    if(s1[i]!=s2[i])
    return 0;//not same

if(s1[i]==s2[i])
    return 1;//same
else
   return 0;//not same (different length strings)       
}

int main()
{
    printf(Is_palindrome("sksk"));
    return 0;
}