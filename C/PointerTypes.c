//VOID POINTER

/*#include<stdio.h>
{
    int main()
    {
        int n = 10;
        void *ptr=&n;

        printf("%d",*(int*)ptr); 
    }
}*/



 //NULL POINTER

/*#include<stdio.h>
int main()
{
    printf("%d",sizeof(NULL));
    return 0;
}
*/

//DANGLING POINTER

#include<stdio.h>
int *fun()
{
    int num = 10;
    return &num;
    
}
int main()
{
    int *ptr  =NULL;
    ptr=fun();
    printf("%d",*ptr);
    return 0;
    
}






//WILD POINTER