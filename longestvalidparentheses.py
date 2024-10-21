from collections import Counter
def valid(a):
    max_length = 0  
    stack = [-1]  # Initialize stack with -1 to handle edge cases  

    for i, char in enumerate(a):  
        if char == '(':  
            stack.append(i)  # Push the index of '(' onto the stack  
        else:  
            stack.pop()  # Pop the top of the stack for the matching ')'  
            if not stack:  
                stack.append(i)  # Push the index of the unmatched ')' onto the stack  
            else:  
                max_length = max(max_length, i - stack[-1])  # Calculate the length of valid substring  

    return max_length  

    
print(valid("()(()"))