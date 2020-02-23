#!/usr/bin/python3
"""
Module island
"""


def island_perimeter(grid):
    """
    returns the island perimeter described in grid
    """
    if !grid or len(grid) == 0:
        return None
    sums = 0
    my_list = []
    for i in range(len(grid)):
        for j in grid[i]:
            if j == 1:
                my_list.append(j)
    for i in range(1, len(my_list) - 1):
        sums += 1
    sums *= 2
    sums += 6
    return (sums)
