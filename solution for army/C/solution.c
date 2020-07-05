#include "solution.h"

#define true 1
#define false 0


int look_for_higher_rank(int rank, int ranks[], int N) {
    for (int i = 0; i < N; i++)
        if (ranks[i] == rank + 1) return true;
    return false;
}


int solution(int ranks[], int N) {
    int output = 0;
    for (int i = 0; i < N; i++)
        if (look_for_higher_rank(ranks[i], ranks, N) == true) output++;
    return output;
}