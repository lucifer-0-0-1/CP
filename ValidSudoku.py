#Only the solution is written here not the whole program.
#Time Complexity = O(1)
#Space Co,plexity = O(1)
#Values given by leetcode.
class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        valid = True
    
    # Check rows and columns
        for k in range(9):
            charcount = [0] * 256  # For rows
            charcount1 = [0] * 256  # For columns
            
            for j in range(9):
                if board[k][j] != '.':
                    charcount[ord(board[k][j])] += 1
                    if charcount[ord(board[k][j])] > 1:
                        valid = False
                
                if board[j][k] != '.':
                    charcount1[ord(board[j][k])] += 1
                    if charcount1[ord(board[j][k])] > 1:
                        valid = False

        # Check 3x3 subgrids
        i = 1
        while i < 8:
            j = 1
            while j < 8:
                charcount3 = [0] * 256
                for l in range(i - 1, i + 2):
                    for h in range(j - 1, j + 2):
                        if board[l][h] != '.':
                            charcount3[ord(board[l][h])] += 1
                            if charcount3[ord(board[l][h])] > 1:
                                valid = False
                j += 3
            i += 3
        
        return valid
            