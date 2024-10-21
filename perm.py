import itertools
def perm(n,k):
    mul = []
    for i in range(1, n+1):
            mul.append(i)
    
    hello = list(itertools.permutations(mul, n))
    #hello[k-1] = list(hello[k-1])
    hello[k-1] = ''.join(str(item) for item in hello[k-1])
    return hello[k-1]

print(perm(3,3))