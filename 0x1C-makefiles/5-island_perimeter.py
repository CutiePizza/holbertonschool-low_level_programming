#!/usr/bin/python3
"""
Module island
"""


def island_perimeter(grid):
    """
    returns the island perimeter described in grid
    """
    sums = 0
    my_list = []
    for i in range(len(grid)):
        for j in grid[i]:
            if j == 1:
                my_list.append(j)
    for i in range(1, len(my_list) - 1):
        sums += 1
    if (len(my_list) == 1):
            sums += 4
    elif len(my_list) != 0:
        sums *= 2
        sums += 6
    return (sums)
