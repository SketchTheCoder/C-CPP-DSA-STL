//check a given a aplhabet (uppercase), an aplhabet(lower case), a digit or a special character.
//(A-Z=65-90,a-z=97-122,0-9=48-57)
#include<stdio.h>

int main()
{
char x;
int y;
printf("Enter a character:");
scanf("%c",&x);


y=("%d",x);

if(y>64&y<91)//we can also use direct x>='A' && x<='Z'
{printf("It is an uppercase alphabet.");

}
else if(y>96&y<123)
{
    printf("It is an lowercase alphabet.");

}

else if(y>47&y<58)
{
    printf("It is a digit.");

}

else{
printf("It is a special character.");


}
return 0;
}