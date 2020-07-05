#include <stdio.h>
#include "solution.h"


int main()
{
    int ranks[] = {4, 4, 3, 3, 1, 0};
    int N = sizeof(ranks)/sizeof(*ranks);
    printf("%d\n", solution(ranks, N));

    return 0;
}
