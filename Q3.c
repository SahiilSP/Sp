#include<stdio.h>
int main()
{ FILE *fp;
int i,n;
char ln[26];
    printf("No. of lines to be entered : ");
    scanf("%d",&n);
    printf("Enter the lines :\n");
fp=fopen("file.txt","w");
 for(i=0;i<n;i++)
 { gets(ln);
  fputs(ln,fp);
  fputs("\n",fp);
 }
    return 0;
}