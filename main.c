#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row=0;
    int column=0;
    int i, j;

    printf("Enter Your Row & Column\n");
    scanf("%d%d", &row, &column);
    int array[row][column];

    printf("Enter Your Array Values\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("This Is Your Reversed Array Values\n");
    for(i=row-1; i>=0; i--)
    {
        printf("\n");

        for(j=column-1; j>=0; j--)
        {
            printf("%d", array[i][j]);
        }
    }

    return 0;
}
