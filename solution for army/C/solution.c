#include "solution.h"

#define true 1
#define false 0


int look_for_higher_rank(int rank, int ranks[], int N) {
    for (int i = 0; i < N; i++)
        if (ranks[i] == rank + 1) return true;
    return false;
}


// Since 'sizeof(ranks)' will show only size of a pointer, there is no way to get
// size of this array inside of a function. There are two (in my opinion the best)
// solutions:
// 1) Cheat a little bit and add value of -1 at the end of 'ranks' array to know
//    where valid values end.
// 2) Add 'N' parameter that will hold size of the array.
int solution(int ranks[], int N) {
    int output = 0;
    for (int i = 0; i < N; i++)
        if (look_for_higher_rank(ranks[i], ranks, N) == true) output++;
    return output;
}