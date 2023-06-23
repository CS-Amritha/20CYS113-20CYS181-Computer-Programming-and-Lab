#include <stdio.h>
int main() {
        int i,j,r;
        scanf("%d",&r);
        if(0<r&&r<25)
        {for(i=0;i<r;i++)
        { for (j=0;j<=i;j++)
                {printf("* ");
                }
                printf("\n");
        }
        }
        else
        {printf("Invalid Input");}
        return 0;
}