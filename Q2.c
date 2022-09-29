#include<stdio.h>
int main()
{ FILE *fp;
 char nm[20];
 char c;
 printf("Enter file name :  ");
 gets(nm);
 fp=fopen(nm,"r");
 if(fp==NULL)
 {printf("File does not exist !!");}
 printf("THE FILE CONTENTS ARE :\n");
 while(c!=EOF)
 {c=fgetc(fp);
 printf("%c",c);}
 fclose(fp);
    return 0;
}