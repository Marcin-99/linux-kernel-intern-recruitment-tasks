def solution(ranks):
    return len([i for i in ranks if i + 1 in ranks])
