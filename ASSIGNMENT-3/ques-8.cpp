#include <stdio.h>

#define MAX_SIDE 500

int main()
{
    int result;
    int side1, side2, hypo;

    for (side1 = 1; side1 < MAX_SIDE; side1++)
    {
        for (side2 = 1; side2 < MAX_SIDE; side2++)
        {
            for (hypo = 1; hypo < MAX_SIDE; hypo++)
            {
                result = (side1 * side1) + (side2 * side2);

                if( result == (hypo * hypo) )
                {
                    printf("%d %d %d\n", side1, side2, hypo);
                }
            }
        }
    }

    return(0);
}
