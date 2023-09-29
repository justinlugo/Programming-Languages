-- Using map, double the numbers in list: [1,5,-18,99].
problem1 = map (*2) [1,5,-18,99]

-- Using filter, extract all even numbers in list: [1..100].
problem2 = filter even [1..100]

-- Using map, multiply all numbers in list: [1,3..77] by 3.
problem3 = map (*3) [1,3..77]

-- Using any function, calculate the sum of the squares of all odd numbers
-- in list: [1,2,3,4,5,7,8,1,43,25,65,22].
problem4 = sum squareOdds
squareOdds = map (^2) oddsOnly
oddsOnly = filter odd [1,2,3,4,5,7,8,1,43,25,65,22]
