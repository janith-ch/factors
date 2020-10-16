#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *factors;
    int number,count=1,i=0;

    printf("Enter the number: ");
    scanf("%d",&number);
    //allocating memory dynamically
    factors=(int*)malloc(1*sizeof(int));

    while (count<=number)
    {
        if (number%count==0)
        {
            //reallocating memory
            factors=realloc(factors,i+1*sizeof(int));
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
    free(factors);
    return 0;

}
