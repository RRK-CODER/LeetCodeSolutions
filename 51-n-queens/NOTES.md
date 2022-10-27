https://www.youtube.com/watch?v=7qWsFBBTFRE&ab_channel=Pepcoding
​
when reach [row, col], the subscript of column is col, the subscript of 45° diagonal is n + row + col and the subscript of 135° diagonal is n + 2 * n - 1 + n - 1 + col - row.
Line 6  /*
flag[0] to flag[n - 1] to indicate if the column had a queen before.
flag[n] to flag[3 * n - 2] to indicate if the 45° diagonal had a queen before.
flag[3 * n - 1] to flag[5 * n - 3] to indicate if the 135° diagonal had a queen before.
*/
​