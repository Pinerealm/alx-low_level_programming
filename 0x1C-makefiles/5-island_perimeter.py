#!/usr/bin/python3
"""The island perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""

    perimeter = 0
    for row in range(len(grid)):
        for num in range(len(grid[row])):
            if grid[row][num] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][num] == 1:
                    perimeter -= 2
                if num > 0 and grid[row][num - 1] == 1:
                    perimeter -= 2
    return perimeter
