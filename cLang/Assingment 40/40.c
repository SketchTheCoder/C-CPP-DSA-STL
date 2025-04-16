#include<stdio.h>
#include<string.h>
void input_strings(char a[][20], int n)//In two-d strings we have to put a value in 2nd box and n is bascially number of words.
{
int i,l;
for(i=0;i<n;i++)
{
    fgets(a[i],20,stdin);
    l=strlen(a[i]);
    a[i][l-1]='\0';//Makng last character null of the word.
}
}
void countVowels(char str[][20], int n)
{
    char v[]="aeiouAEIOU";
    int i,j,k,count;
    input_strings(str,n);
    for(i=0;i<n;i++)
    {
        for(j=0,count=0;str[i][j];j++)
        {
            for(k=0;v[k];k++)
                if(str[i][j]==v[k])
                 { count++;
                  break;
        }
        }
printf("Vowels in %s is %d \n",str[i],count);
    }
}
void sortcities()//char gets sorted in alphabet order or we can say in dictonary order
{
    int i,r;
    char temp[20];
    char cities[10][20];
    input_strings(cities,10);
    
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
            if(strcmp(cities[i],cities[i+1])>0)//used to compare strings is its positive then the first string comes after in dictorany order.
            {
            strcpy(temp,cities[i]);///used to copy string
            strcpy(cities[i],cities[i+1]);//swapping is done here.
            strcpy(cities[i+1],temp); 
            }

        }
    }
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
int remove_duplicate(char s[][20],int n)
{
    int i,j,k=0;
    char temp[n][20];
    sort(s,n);
    strcpy(temp[k],s[0]);
    for(i=0;i<n-1;)
    {
        for(j=i+1;j<n;j++)
            if(strcmp(s[i],s[j])==0)//if strings are same then it will just skips them
                continue;
            else
            {
                i=j;
                k++;
                strcpy(temp[k],s[j]);//copying the strings which are not dupicate to temp[k].
                break;
            }
        if(j==n)
            break;
    }
    for(i=0;i<=k;i++)
        strcpy(s[i],temp[i]);
    return k+1;
}
