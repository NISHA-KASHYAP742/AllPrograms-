#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        FILE *fp;
        int ch;
        //char demo[20];
        fp=fopen("demo.txt","r");//opening the file in read mode
        if(fp==NULL)
        {
            printf("error in opening the file !");
            exit(1);
        }
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            putchar(ch);
            ch=fgetc(fp);
        }
        fclose(fp);
    return 0;

}