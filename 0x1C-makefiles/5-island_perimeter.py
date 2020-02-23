#!/usr/bin/python3
"""
Module island
"""


def island_perimeter(grid):
    """
    returns the island perimeter described in grid
    """
    sums = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                sums += 4
                if j > 0 and grid[i][j - 1]:
                    sums -= 2
                if i > 0 and grid[i - 1][j]:
                    sums -= 2
    return (sums)
