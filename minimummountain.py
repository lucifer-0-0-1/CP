#The Solution is based on calculating the left and right longest increasing subsequence and to find the peak in the
#the mountain array and thus the length of the longest mountain sequence is calculated from  
def minimumMountainRemovals(nums: list[int]) -> int:
    n = len(nums)
    if n < 3:
        return 0

    # Step 1: Compute left LIS lengths
    left = [1] * n
    for i in range(1, n):
        for j in range(i):
            if nums[j] < nums[i]:
                left[i] = max(left[i], left[j] + 1)

    # Step 2: Compute right LIS lengths (from the end)
    right = [1] * n
    for i in range(n - 2, -1, -1):
        for j in range(n - 1, i, -1):
            if nums[j] < nums[i]:
                right[i] = max(right[i], right[j] + 1)

    # Step 3: Find the longest mountain and calculate the minimum removals
    max_mountain_length = 0
    for i in range(1, n - 1):
        if left[i] > 1 and right[i] > 1:
            max_mountain_length = max(max_mountain_length, left[i] + right[i] - 1)

    return n - max_mountain_length
    
print(minimumMountainRemovals([4,3,2,1,1,2,3,1]))