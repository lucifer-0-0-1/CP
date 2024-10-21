def min_diff_chocolates(n, m, chocolates):
    # Sort the chocolates array
    chocolates.sort()
    
    # Initialize the minimum difference to a large value
    min_diff = float('inf')
    
    # Traverse the sorted chocolates array to find the minimum difference
    for i in range(n - m + 1):
        current_diff = chocolates[i + m - 1] - chocolates[i]
        if current_diff < min_diff:
            min_diff = current_diff
    
    return min_diff

def main():
    import sys
    input = sys.stdin.read
    data = input().strip().split()
    
    # Read the values of N and M
    n = int(data[0])
    m = int(data[1])
    
    # Read the chocolates array
    chocolates = list(map(int, data[2:2 + n]))
    
    # Find and print the minimum difference
    result = min_diff_chocolates(n, m, chocolates)
    print(result)

if __name__ == "__main__":
    main()