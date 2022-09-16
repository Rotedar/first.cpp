#include <stdio.h>
int main()
{
    // printf("Integer type data takes %d byte\n",sizeof(int));
    // printf("character type data takes %d byte\n",sizeof(char));
    // printf("floating type data takes %d byte\n",sizeof(float));
    // printf("double type data takes %d byte\n",sizeof(double));

    // int main()
    // {#include <stdio.h>
    
    //     printf("Hello World\n");   /* stracture of C*/
    //     return 0;
    // }

    /*beecrowd 1097 solution Sequence IJ 3.c*/
    // int i,j;
    // for(i = 1; i<= 9; i = i+2){
    //     for(j = 6+i; j>=4+i; j--){
    //         printf("I=%d J=%d\n",i,j);
    //     }
    // }

    int x,y,z,number;
    int sum=0;
    int i;
        while(1){
            scanf("%d %d",&x,&y);
        if (x<=0 || y<=0)
        {
            break;
        }
        else if(x>y)
        {
            sum=0;
            for (i = y; i <= x; i++)
            {
                number = i;
                sum+=number;
                printf("%d ",number);
            }
            printf("Sum=%d\n",sum);
        }
        // else
        // {
        //     for (i = x; i <= y; i++)
        //     {
        //         number = i;
        //         sum+=number;
        //         printf("%d ",number);
        //     }
        //     printf("Sum=%d\n",sum);
        // }
    }

    // int x,y,z,number;
    // int sum=0;
    // int i;

    // scanf("%d",&z);
    // for ( i = 1; i <= z; i++)
    // {
    //     scanf("%d%d",&x,&y);
    //     if(x>y && x>0 && y>0){
    //         for(int i=y; i<=x; i++)
    //         {
    //             number = i;
    //             printf(" %d",number);
    //             sum+=number;
    //         }
    //         printf(" sum=%d\n",sum);
    //     }
    // }
    

    return 0; 
}
