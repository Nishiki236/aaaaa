#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

srand(time(0));

int number1=(rand() %20)+0;
int a=20-number1;
int number2=(rand() %a)+0;
int number3=20-number1-number2;

printf("intelligence:%d\n",number1);
printf("stamina:%d\n",number2);
printf("charisma:%d\n",number3);

if(number1>=number2 && number1>=number3)
{
    printf("mage\n");
}

if(number2>=number1 && number2>=number3)
{
    printf("knight\n");
}

if(number3>=number1 && number3>=number1)
{
    printf("thief\n");
}

return 0;
}

