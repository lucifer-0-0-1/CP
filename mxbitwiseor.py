import itertools
def subsets(a):
    numberOfSubsets = 2**(len(a)) -1
    sslist = []
    for i in range(1,len(a)+1):
        sslist.append(list(itertools.combinations(a, i)))

    return numberOfSubsets, sslist

def findor(a):
    for i in range(1, len(a)):
        a[i] = a[i-1] | a[i]
    
    maxpossor = a[len(a)-1]
    return maxpossor
def countmaxor(a):
    wo = list(a)
    maxpossor = findor(wo)
    fu = []
    _, sslist = subsets(a)
    for lists in sslist:
        for i in lists:
            fu.append(i)
    
    result = []
    for i in fu:
        result.append(findor(list(i)))

    count = 0
    for res in result:
        if res == maxpossor:
            count+=1
    
    return count
    #result = a[len(a)-1] 
    #return result

print(countmaxor([2,2,2]))
