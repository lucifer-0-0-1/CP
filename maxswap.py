def maximumSwap(num):  
        num_str = str(num)   
        digits = list(num_str)    
        last_index = {int(d): i for i, d in enumerate(digits)}

        for i in range(len(digits)):  
            for d in range(9, int(digits[i]), -1):
                print(d)  
                if last_index.get(d, -1) > i:   
                    digits[i], digits[last_index[d]] = digits[last_index[d]], digits[i]  
                    return int(''.join(digits))

        return num

print(maximumSwap(99368))