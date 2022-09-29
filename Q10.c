#include<stdio.h>
int main()
{ FILE *fp,*en;
 char nm[20],c;
 printf("Enter file to be encrypted :  ");
 gets(nm);
 fp=fopen(nm,"r");
 en=fopen("encrypt.txt","w");
     c=fgetc(fp);
 while(c!=EOF){
     c=c+1 ;
     fputc(c,en);
     c=fgetc(fp);}
     fclose(fp);
     fclose(en);
     printf("File Encrypted succesfully!!");
    return 0;
}
     
    /* fp = fopen(nm, "w");
    en = fopen("encrypt.txt", "r");
    c = fgetc(en);
    while(c != EOF)
    {
        c = fputc(c, fp);
        c = fgetc(en);
    }
    fclose(fp);
    fclose(en);*/
     /*while((c=fgetc(en))!=EOF)
 {//c=fgetc(en);
 printf("%c",c);}*/
    