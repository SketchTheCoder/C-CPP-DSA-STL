#include<stdio.h>
#include<string.h>
void printf_frequency(char a[])
{
    int f[128]={0},i;//Making every index is 0..
    for(i=0;a[i];i++)
      f[a[i]]++;//ascii code of that increase if its present in string...
    for(i=0;i<=127;i++)
        if(f[i]!=0)//printf all index which has increased....
           printf("%c-%d\n",i,f[i]);  
}
int find_word(char a[], char word[])
{

    int i,j,l;
    l=strlen(word);
    for(i=0;a[i+l-1];i++)
     {
        for(j=0;word[j];j++)
        {
            if(a[i+j]!=word[j])
            break;
        }
        if(!word[j]) 
          if(i==0&&(a[i+l]==' ' || a[i+l]=='\0' )|| a[i-1]
          ==' '&&(a[i+l]==' ' || a[i+l]=='\0'))

           return i;
     }
     return -1;

}
char* capitalize(char a[])
{
 int i=0;
 if(a[i]>='a' && a[i]<='z')
    a[i]-=32;
  for(i=1;a[i];i++) 
  {
    if(a[i]==' ')
       if(a[i+1]!=0&&a[i+1]!=' ')
        if(a[i+1]>='a'&&a[i+1]<='z')
          a[i]-=32;

  } 
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
char* Acronym(char a[])
{
int i,j,k,word_count;
word_count=count_words(a);
char s[word_count][50];
for(i-0,j=0,k=0;a[i];i++,k++)
{
    if(a[i]!=' ')
      s[j][k]=a[i];
    else
    {
        s[j][k]='\0';
       j++;
       k=-1;
    
    }
}
s[j][k]='\0';
a[0]='\0';
for(k=1,i=0;k<=word_count;k++,i++)
{
    a[i]=s[k-1][0];
   if(a[i]>='a'&& a[i]<='z')
      a[i]-=32;
      i++;

      a[i]=' ';
    }
strcpy(a+i,s[word_count-1]);
return a;
}
char* catinate(char a[], char b[])
{
int i,j;
i=strlen(a);
for(j=0;b[j];j++)
    a[i+j]=b[j];
a[i+j]='\0';
return a;
}


int main()
{
    char a[]="skeetch";
    a[strlen(a)-1]='\0';
    printf_frequency(a);
    return 0;
}