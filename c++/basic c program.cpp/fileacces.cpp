#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
int main()
  {
  char file_name[30],data[2000];
  mkdir("C:\\abcdef");
  printf("Enter the Name of File Which You want to Create = ");
  fflush(stdin);
  gets(file_name);
  FILE *fp = fopen(file_name,"a");
  if(fp == NULL)
    {
    printf("Unable to Create File ");
	}
  else
    {
    char ch;
    printf("%s File Created Sucessfully....\nif You want to Insert Data Press Y = ",file_name);
	fflush(stdin);
	scanf("%c",&ch);
	if(ch == 'Y' || ch == 'y')
	  {
	  system("cls");
	  printf("Enter the Data = \n");
	  fflush(stdin);
	  gets(data); // string
	  int i = 0;
	  while(1)
	    {
	    if(data[i] == '\0')
	      {
	      break;
		  }
		fputc(data[i],fp);
		i++;
		}
	  }
    }
  }
