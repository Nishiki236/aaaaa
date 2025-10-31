#include<stdio.h>

int main()
{
 double a,b,c,D;
 printf("ax^2+bx+c=0のa,b,cを入力してください");
 scanf("%lf %lf %lf",&a,&b,&c);
 D=b*b-4*a*c;
 
 if (D==0)
 {
 printf("xは重解をもつ");
 }
 else if (D>=0)
 {
 printf("xは異なる2つの実数解をもつ");
 }
 else
 {
 printf("xは虚数解をもつ");
 }
 return 0;
 } 
 
