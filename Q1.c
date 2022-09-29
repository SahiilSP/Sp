#include<stdio.h>
int main()
{ FILE *fp;
  char hd[30];
  char nm[20];
  int age;
  fp=fopen("File_Handlin.txt","w");
  printf("Heading : ");
  gets(hd);
  printf("Name : ");
  gets(nm);
  printf("Age : ");
  scanf("%d",&age);
  fprintf(fp,"%s\n\n",hd);
  fprintf(fp,"Name : %s\n",nm);
  fprintf(fp,"Age  : %d\n",age);
  fclose(fp);
    return 0;
}