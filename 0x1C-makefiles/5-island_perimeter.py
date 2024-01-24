#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    # Define the possible directions to check neighbors (up, down, left, right)
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Cell is land, check its neighbors
                for direction in directions:
                    ni, nj = i + direction[0], j + direction[1]
                    if ni < 0 or ni >= len(grid) or nj < 0 or nj >= len(grid[i]) or grid[ni][nj] == 0:
                        # finally perimeter
                        perimeter += 1

    return perimeter
