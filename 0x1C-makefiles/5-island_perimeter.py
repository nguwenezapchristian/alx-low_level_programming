#!/usr/bin/python3
def island_perimeter(grid):
    """ calculate the perimeter of an island """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                """ Checks if the cell to the left is also land """
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                """ Checks if the cell above is also land """
                    edges += 1
    return size * 4 - edges * 2
