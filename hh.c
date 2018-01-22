#include <stdio.h>
#include <math.h>

int main()
{
    int low, high, i, sam1, sam2, remainder, n = 0, result = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, high);

    for(i = low + 1; i < high; ++i)
    {
        sam2 = i;
        sam1 = i;

        
        while (sam1 != 0)
        {
            sam1 /= 10;
            ++n;
        }

               while (sam2 != 0)
        {
            remainder = sam2 % 10;
            result += pow(remainder, n);
            sam2 /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }

                n = 0;
        result = 0;

    }
    return 0;
}
