#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        FILE *fp;
        int ch,noc=0,nol=1;
        char demo[200];
        fp=fopen("demo.txt","r");
        if(fp==NULL)
        {
            printf("error in opening the file !");
            exit(1);
        }
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            if(ch=='\n'|| ch=='\t')
                nol++;
            printf("%c",ch);
            noc++;
            ch=fgetc(fp);
        }
        if(noc>0)
        {
            //fgets(demo,200,stdin);
            printf("\nIn the file %s there are %d lines and %d characters ",demo,noc,nol);
        }
        else
            printf("\n files is empty !");
        fclose(fp);
    return 0;
}