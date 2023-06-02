#!/usr/bin/python3
'''
Island Program
'''


def island_perimeter(grid):
    '''
        Island Perimter
        Input : grid
    '''

    grid_height = len(grid)
    grid_width = len(grid[0])
    grid_size = 0
    grid_edges = 0

    for index in range(grid_height):
        for index2 in range(grid_width):
            if grid[index][index2] == 1:
                grid_size += 1
                if (index2 > 0 and grid[index][index2 - 1] == 1):
                    grid_edges += 1
                if (index > 0 and grid[index - 1][index2] == 1):
                    grid_edges += 1
    return grid_size * 4 - grid_edges * 2
