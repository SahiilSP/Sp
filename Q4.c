#include<stdio.h>
int main()
{ FILE *fp;
 int i=0,j;
 char nm[26];
 printf("Enter the file name : ");
 gets(nm);
 fp=fopen(nm,"r");
    char fl[10][30];
   // while(fgets(fl[i],30,fp))
   // {i++ ;}
   
   while(fgets(fl[i],30,fp))
   {i++ ; }
    j=i;
    printf("THE FILE CONTENTS ARE :-\n");
    for(i=0;i<j;i++)
    {printf("%s",fl[i]);}
    fclose(fp);
    return 0;
}