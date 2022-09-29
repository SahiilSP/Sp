#include<stdio.h>
int main()
{ FILE *fp, *cp;
 char c,n[20],n1[20];
 printf("Enter the file to be copied : ");
 gets(n);
 fp=fopen(n,"r");
 printf("Enter new file name : ");
 gets(n1);
 cp=fopen(n1,"w");
 while(c!=EOF)
 {c=fgetc(fp);
 fputc(c,cp);}
 printf("File copied successfully !!\n"); 
 fclose(fp);
 fclose(cp);
 
    return 0;
}