#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factors[100];
    int number,count=1,i=0;

    printf("Enter the number: ");
    scanf("%d",&number);
    while (count<=number)
    {
        if (number%count==0)
        {
            factors[i]=count;
            i++;
        }
        count++;
    }
    printf("Factors are: \n");
    for(int q=0;q<i;q++)
    {
        printf("%d\n",factors[q]);
    }
    return 0;
 
}
