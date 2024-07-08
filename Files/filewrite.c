// #include<stdio.h>
// #include<stdlib.h>
// void main (){
// FILE *fp=NULL;
// char ch = 'a';
// fp=fopen("abc.txt","w");

// if (fp==NULL)
// {
// printf("no file present");
// exit(1);
// }
// fputc(ch,fp);
// fclose(fp);
// }

#include<stdio.h>
#include<stdlib.h>
void main (){
FILE *fp=NULL;
char str[50];
fp=fopen("abc.txt","w");

if (fp==NULL)
{
printf("no file present");
exit(1);
}

printf("Enter your name\n");
fgets(str,sizeof(str),stdin);


fputs(str,fp);
fclose(fp);
}