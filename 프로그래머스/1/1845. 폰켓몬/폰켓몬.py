import itertools

def solution(nums):
    ls=set(nums)
    answer= len(ls) if len(ls)<len(nums)/2 else len(nums)/2
    return answer