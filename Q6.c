#include<stdio.h>
int main()
{ FILE *fp;
 int w=1,ch=0 ;
 char c,nm[26];
 printf("Enter file name :  ");
 gets(nm);
 fp=fopen(nm,"r");
 if(fp==NULL)
 {printf("ERROR: File does not exist !!");}
 else{
 //printf("THE FILE CONTENTS ARE :\n");
 while(c!=EOF)
 {c=fgetc(fp);
 ch++ ;
 if(c=='\n') 
 ch-- ;
 if(c==' ')
 w++ ;}
 fclose(fp);
 printf("\nThe no.of words in the file are = %d",w); 
 printf("\nThe no.of characters in the file are = %d",ch-1); }
    return 0;
}