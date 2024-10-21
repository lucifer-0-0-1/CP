def count_epic_months(sales):
    n = len(sales)
    epic_count = 0
    
    for i in range(n):
        is_epic = True
        
        # Check condition (a)
        if i > 0 and sales[i] <= sales[i - 1]:
            is_epic = False
        
        # Check condition (b)
        if i < n - 1 and sales[i] <= sales[i + 1]:
            is_epic = False
        
        if is_epic:
            epic_count += 1
    
    return epic_count

def process_test_cases():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    T = int(data[0])
    index = 1
    
    results = []
    
    for _ in range(T):
        X = int(data[index])
        index += 1
        sales = list(map(int, data[index:index + X]))
        index += X
        result = count_epic_months(sales)
        results.append(result)
    
    for result in results:
        print(result)

# Call the function to process test cases
process_test_cases()