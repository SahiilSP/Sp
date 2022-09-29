#include<stdio.h>
int main()
{ FILE *fp;
 int l=0;
 char c,nm[26];
 printf("Enter file name :  ");
 gets(nm);
 fp=fopen(nm,"r");
 if(fp==NULL)
 {printf("ERROR: File does not exist !!");}
 else{
 printf("THE FILE CONTENTS ARE :\n");
 while(c!=EOF)
 {c=fgetc(fp);
 printf("%c",c);
 if(c=='\n')
 l++ ;}
 fclose(fp);
 printf("\nThe no.of lines in the file are = %d",l); }
    return 0;
}