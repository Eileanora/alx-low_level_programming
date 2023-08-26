#!/usr/bin/python3
"""Function that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    r = len(grid)
    c = len(grid[0])
    islands = 0
    neighbours = 0
    for i in range(r):
        for j in range(c):
            if grid[i][j] == 1:
                islands += 1
                if i + 1 < r and grid[i + 1][j] == 1:
                    neighbours += 1
                if j + 1 < c and grid[i][j + 1] == 1:
                    neighbours += 1
    return islands * 4 - neighbours * 2
