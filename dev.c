#include<stdio.h>
int main()
{
	char str[]={'D','i','l','k','a','s','h','\0'};
    //char str[]="Dilkash";
	char *ptr=str;

  while(*ptr!=0)
  {
	
	printf("%c",*ptr);
	ptr++;
  }
	return 0;
}
