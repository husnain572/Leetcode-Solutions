class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        row_length=len(grid[0])
        column_length=len(grid)
        i=0
        j=row_length-1
        total=0
        while i<column_length and j>=0:
            if grid[i][j]<0:
                total=total+column_length-i
                j=j-1
            else:
                i=i+1
        return total       