def longestSquareStreak(nums: list[int]) -> int:
    num_set = set(nums)
    max_streak = -1
    for i in nums:
        current = i
        streak_length = 0
        while current in num_set:
            streak_length+=1
            current = current**2

        if streak_length > max_streak:
            max_streak = streak_length
    return max_streak if max_streak > 1 else -1

print(longestSquareStreak([2,3,5,6,7]))