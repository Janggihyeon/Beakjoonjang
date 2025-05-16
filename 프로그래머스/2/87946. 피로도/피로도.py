from itertools import permutations

def solution(k, dungeons):
    
    answer = -1
    dungeon_len=len(dungeons)
    ls=[i for i in range(dungeon_len)]
    new_ls=list(permutations(ls))
    
    can_max=0
    
    for method in new_ls:
        total=k
        count_method=0
        cando=True
        for count in method:
            if total>=dungeons[count][0] and total-dungeons[count][1]>=0:
                total-=dungeons[count][1]
                count_method+=1
            else:
                cando=False
                break
        can_max=max(can_max,count_method)
        
    answer=can_max
    return answer