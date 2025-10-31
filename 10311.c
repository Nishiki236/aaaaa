#include<stdio.h>

int main(void)
{
  int diff;
  char large;
  char small;
	
  printf("small>>>");
  scanf("%c",&small);
  diff='a'-'A';
  large=small-diff;
	
  printf("small>>%c large>>%c\n.",small,large);
	
  return 0;
  }
  