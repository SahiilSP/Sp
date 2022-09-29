#include<stdio.h>
//Appending file at end of other file !!
int main()
{ FILE *fp,*f,*cp;
 fp=fopen("FH.txt","r");
 f=fopen("file.txt","r");
 cp=fopen("copy.txt","w");
 char a;
 while(a!=EOF){
     a=fgetc(fp);
     fputc(a,cp);}
     fputc('\n',cp);
 while((a=fgetc(f))!=EOF){
     fputc(a,cp);}
     fclose(fp);
     fclose(f);
     fclose(cp);
    return 0;
}
     //a=fgetc(f)