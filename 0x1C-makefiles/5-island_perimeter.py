#!/usr/bin/python3
def island_perimeter(grid):
        """ calculate he perimeter of an island """
        perimeter = 0
        for x,i in enumerate(grid):
                for y,j in enumerate(i):
                        if (j == 1):
                                # print(x,y, left_side, top_side, right_side, bottom_side)
                                # checkin the top side
                                top_side = [x-1, y]
                                # checkin the bottom side
                                bottom_side = [x+1, y]
                                # checkin the left side
                                left_side = [x, y-1]
                                # checkin the right side
                                right_side = [x, y+1]
                                all_side = [left_side, top_side, right_side, bottom_side]
                                for side in all_side:
                                        if grid[side[0]][side[1]] == 0:
                                                perimeter += 1
        return perimeter
