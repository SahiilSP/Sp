#include<stdio.h>
int main()
{ FILE *fp, *cp;
 char nm[20],c;
 int d,l=1;
 printf("Enter file name :  ");
 gets(nm);
 fp=fopen(nm,"r");
 printf("THE FILE CONTENTS ARE :\n");
 while(c!=EOF)
 {c=fgetc(fp);
 printf("%c",c);}
 printf("Enter the line no. to be deleted : ");
 scanf("%d",&d);
 
 cp=fopen("copy.txt","w") ;
 while(c!=EOF)
 {c=fgetc(fp);
 if(c=='\n')
 l++ ;
 if(l!=d)
 fputc(c,cp);}
 fclose(fp);
 //fclose(cp);
 //remove(nm);
 //rename("copy.c",nm);
//fp=fopen(nm,"r");
 printf("THE FILE CONTENTS AFTER MODIFICATION ARE :\n");
 while(c!=EOF)
 {c=fgetc(cp);
 printf("%c",c);}
 fclose(cp);
    return 0;
}