#include<stdio.h>
#include<string.h>
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
int splittostrings(char str[], char s[][20], int n)
{
    int no_of_words,i,j=-1,k;
    no_of_words=count_words(str);
    if(no_of_words<=n)
    {
        for(i=0;i<no_of_words;i++)
        {
            for(j++,k=0;str[j]!=' '&&str[j]!='\0';j++,k++)
                s[i][k]=str[j];
            s[i][k]='\0';
        }
    }
    return no_of_words;
}
void f1()
{
    char str[]="mysirg education services and this is a learning for students";
    char s[20][20],temp[100][20];
    int i,j,no_of_words;
    no_of_words=splittostrings(str,temp,strlen(str));
    for(i=0,j=0;i<no_of_words;j++)
    {
        if(temp[i][strlen(temp[i])-1]=='s');//har word ka last character check kro...
        {
            strcpy(s[j],temp[i]);//copying only those words which have s in last.
            j++;
        }

    }
    for(i=0;i<j;i++)
    printf("\n %s",s[i]);
}
char maxfrecharacter(char s[][20], int n)
{
   int freq[256]={0};//It is an aary of 256 number which is basically asscii code and we have put 0 in each ascci which is index here....
    int i,j,max;
    char ch;
    for(i=0;i<n;i++)
    {
        for(j=0;s[i][j];j++)
        freq[s[i][j]]++;

    }
    max=freq[0];
    ch=0;
    for(i=0;i<256;i++)
    {
        if(max<freq[i])
        {
            max=freq[i];
            ch=i;//it will hold the index or ascci value of character which has occur most time it will gives the char as its char type.
        }

    }
 return ch;
}
//anagarm is that we use same characters but arrangement is different ....
int IsAnagram(char s1[], char s2[])
{
    int f1[256]={0},f2[256]={0};
    int i;
    for(i=0;s1[i];i++)
      f1[s1[i]++];

    for(i=0;s2[i];i++)
      f2[s2[i]++];

        if(f1[i]!=f2[i])
            return 0;

    return 1;        
}
void f4()
{
    char str[]="mysirg education services and this is a learning for students";
    char s[20][20],temp[100][20];
    int i,j,no_of_words;
    no_of_words=splittostrings(str,temp,strlen(str));
    for(i=0,j=0;i<no_of_words;j++)
    {
        if(temp[i][0]=='a');//har word ka first character check kro...
        {
            strcpy(s[j],temp[i]);//copying only those words which have a in starting
            j++;
        }

    }
    for(i=0;i<j;i++)
    printf("\n %s",s[i]);
}
int countGmail(char s[][50], int n)
{
    char text[]="@gmail.com";
    int i,j,count =0,k;
    for(i=0;i<n;i++)
    {
        if(strlen(s[i])>10)//if we character are more than 10 in strings then only we need to check them
        {
            for(k=0,j=strlen(s[i])-10;s[i][j];j++,k++)//we will start checking j before 10 index as we need to check only @gmail.com..
                 if(text[i]!=s[i][j])
                 break;

             if(!text[k])
                 count++;           
        }
    }
    return count;
}
