import itertools
def max_unique_substrings(s):
    def backtrack(start, unique_substrings):
        if start == len(s):
            return len(unique_substrings)

        max_count = 0
        for end in range(start + 1, len(s) + 1):
            substring = s[start:end]
            if substring not in unique_substrings:
                unique_substrings.add(substring)
                max_count = max(max_count, backtrack(end, unique_substrings))
                unique_substrings.remove(substring)

        return max_count

    return backtrack(0, set())     

print(max_unique_substrings("ababccc"))