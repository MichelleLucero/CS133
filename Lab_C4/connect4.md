#Connect 4 specifications
###Anthony Chen, Michelle Lucero, Jordan Yaqoob


1. Display
..* user(2 users) choice -- pick a chip? 'X' or 'O' chips
..* represent the board--(row = 6, col = 7) using 2-dimensional arrays
..* display reason for termination(tie or win) -- if win display the winning user



2. API
..* take input from user of chip type('X' or 'O')
..* build the 2D array
..* take input of column selection
..* gravity-- how to make chip fall---user select a column then place chip in the lowest unoccupied row
..* keep track of user's turn--alternate turns
..* terminate once 4 or more of same colored chips are consecutive(diagonal,horizontal,vertical) == win
or terminate if all cells are filled == tie
