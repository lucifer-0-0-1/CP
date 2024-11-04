def maxMoves(grid: list[list[int]]) -> int:
    m, n = len(grid), len(grid[0])
    dp = [[-1] * n for _ in range(m)]

    def dfs(row, col):
        if dp[row][col] != -1:
            return dp[row][col]

        max_move = 0
        for dr in [-1, 0, 1]:  # possible row changes: up, right, down
            new_row, new_col = row + dr, col + 1
            if 0 <= new_row < m and new_col < n and grid[new_row][new_col] > grid[row][col]:
                max_move = max(max_move, 1 + dfs(new_row, new_col))

        dp[row][col] = max_move  # Memoize the result after all moves are checked
        return dp[row][col]

    max_moves = 0
    for row in range(m):
        max_moves = max(max_moves, dfs(row, 0))

    return max_moves

# Test the function with the given example
print(maxMoves([[2, 4, 3, 5], [5, 4, 9, 3], [3, 4, 2, 11], [10, 9, 13, 15]]))
