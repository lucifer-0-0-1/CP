from itertools import groupby
def makeFancyString(s: str):
    res = []
    for i, j in groupby(s):
        j = list(j)
        if len(j) > 2:
            res.extend(j[:2])
        else:
            res.extend(j)
    return ''.join(res)
print(makeFancyString("aabaa"))

    