#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    shared_edges = 0
    land_cell = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                land_cell += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    shared_edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    shared_edges += 1
    return land_cell * 4 - shared_edges * 2
