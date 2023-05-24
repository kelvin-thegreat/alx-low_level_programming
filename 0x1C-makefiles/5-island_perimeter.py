#!/usr/bin/python3
"""
Module that calculates the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island in the grid.

    Args:
        grid (List[List[int]]): A 2D grid representing the island, where 1 represents land and 0 represents water.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with assuming all sides are water

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract if there is land to the north

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract if there is land to the west

    return perimeter

