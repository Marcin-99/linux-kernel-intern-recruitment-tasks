#include <stdio.h>
#include "solution.h"


void test(int expected, int actual){
    if(expected == actual) printf("\nPASSED");
    else {
        printf("\nFAILED");
        printf("\n %d is not equal to %d", expected, actual);
    }
}


int main()
{
    //template for adding test case:
    //int arr[] = {a, b, c};
    //N = sizeof(arr)/sizeof(*arr);
    //test(expected_output, solution(arr, N));

    int ranks[] = {3, 4, 3, 0, 2, 2, 3, 0, 0};
    int N = sizeof(ranks)/sizeof(*ranks);
    test(5, solution(ranks, N));

    int ranks2[] = {4, 2, 0};
    N = sizeof(ranks2)/sizeof(*ranks2);
    test(0, solution(ranks2, N));

    int ranks3[] = {4, 4, 3, 3, 1, 0};
    N = sizeof(ranks3)/sizeof(*ranks3);
    test(3, solution(ranks3, N));

    int ranks4[] = {1, 2, 1, 0, 4, 1};
    N = sizeof(ranks4)/sizeof(*ranks4);
    test(4, solution(ranks4, N));

    int ranks5[] = {};
    N = sizeof(ranks5)/sizeof(*ranks5);
    test(0, solution(ranks5, N));

    int ranks6[] = {0, 0, 0, 0, 0, 1, 0, 0, 0};
    N = sizeof(ranks6)/sizeof(*ranks6);
    test(8, solution(ranks6, N));

    return 0;
}
