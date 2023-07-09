#include <stdio.h>
int main()
//declaring the variables
{
	int i, j, rows;

	scanf("%d", &rows);
	printf("*\n");
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=i; j++)
			{
               if (j==1) {
                    printf("*");
                }
                printf("%d", j);
                }
                for(j=i-1; j>=1; j--)
			{		
				printf("%d", j);
                            }
            printf("*\n");
                }
//Running the loop
for (i = rows-1; i>=1;i--) {
        for (j=1;j<=i;j++) {
            if (j==1) {
                printf("*");
            }
            printf("%d", j);
            
        }
        for (j=i-1;j>=1;j--) {
            printf("%d",j);
            
        }
        printf("*\n");
    }
printf("*\n");
	return 0;
}