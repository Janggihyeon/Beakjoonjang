def solution(genres, plays):
    answer = []
    hash_set={}
    for i in range(len(genres)):
        if genres[i] not in hash_set:
            hash_set[genres[i]]=[(i,plays[i])]
        else:
            hash_set[genres[i]].append((i,plays[i]))
    sorted_hash=dict(sorted(hash_set.items(), key=lambda item: sum(i[1] for i in item[1]),reverse=True))
    for i in sorted_hash:
        ls=sorted(sorted_hash[i],key=lambda item:item[1],reverse=True )
        if len(ls)>=2:
            for i in range(2):
                answer.append(ls[i][0])
        else :
            answer.append(ls[0][0])
    return answer