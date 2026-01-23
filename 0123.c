#include<stdio.h>
#include<math.h>

int main(void)
{
 double a,b,c;
 printf("ax^2+bx+c=0のa,b,cを入力してください");
 scanf("%lf %lf %lf",&a,&b,&c);
 const double D=b*b-4*a*c;
 const double F=(-b+sqrt(D))/(2*a);
 const double G=(-b-sqrt(D))/(2*a);
 const double H=-b/(2*a);
 const double I=sqrt(-D)/(2*a);
 
 if (a==0)
 {
  printf("aは0以外を入力してください\n");
 }
 
 else if (D==0)
 {
 printf("xは重解をもつ\n");
 printf("解はx=%f\n",F);
 }
 else if (D>0)
 {
 printf("xは異なる2つの実数解をもつ\n");
 printf("解はx=%f,",F);
 printf("x=%f\n",G);
 }
 else
 {
 printf("xは虚数解をもつ\n");
 printf("解はx=%f+j%f,",H,I);
 printf("x=%f-j%f\n",H,I);
 
 }
 return 0;
 } 
 