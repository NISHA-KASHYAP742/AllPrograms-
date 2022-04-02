#include<stdio.h>
void main()
{
    //FILE *fp;
     
    //fp=fopen("fle.txt","w");
    //fputc('a',fp);
    //fprintf(fp,"%d",num);
    //fprintf (fp,"Hello nisha");
    //fputs("Hello C programmers ",fp);
    //fclose(fp);

    //fwrite(&data,1,size(data),fp);//address of data,number of blocks, size of data,pointer
    //printf("file written");

    /*int n=25;
    FILE *p;
    int a =25;
    int b;
    p=fopen("binary_file.bin","wb++");
    if(fwrite(&a,sizeof(int),1,p))
    {
        printf("data written successfully !");
    }
    else
    {
        printf("error !");
    }
    fclose(p);
    p=fopen("binary_file.bin","rb");
    fread(&b,sizeof(int),1,p);
    printf("%d",b);
    fclose(p);*/

    int s;
    FILE *p;

    p=fopen("binary_file.bin","wb++");
    if(p==NULL)
    {
        printf("Error !");
    }
    else
    {
        printf(" Enter here  : ");
        scanf("%d",&s);
        fwrite(&s,sizeof(int),1,p);
    }
    
    fclose(p);
   
}