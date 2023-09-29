{-- 1. Take a single integer parameter and indicate the number of primes.
Output a list of every other prime.--}

-- problem1 10 --> [2,5,11,17,23,31,41,47,59,67]
-- problem1 7 --> [2,5,11,17,23,31,41]

-- A list of prime numbers.
listOfPrimes = [ x | x <- [1..], isPrime x ]

-- Determines if x is a prime number.
isPrime x = ip x [2..(isqrt(x-1))]
 where
 ip _ [] = True
 ip x (y:xs)
  | x `mod` y == 0 = False
  | otherwise = ip x xs

isqrt :: Integral i => i -> i
isqrt = ceiling . sqrt . fromIntegral

-- New list that excludes every other integer from the list of prime numbers.
problem1 n = [ listOfPrimes !! x | x <- [1,3..2*n] ]

{-- 2. Using recursion, take a single integer parameter and indicate the
maximum value of Fibonacci numbers in the list. Final solution will be
a list of Fibonacci numbers that have a 3 as their right-most digit and
are less than or equal to n.--}

-- problem2 100 --> [3,13]
-- problem2 10000 --> [3,13,233]

{-- List of Fibonacci numbers.
problem2 n = go n 1 1
 where
 go n f s
  | (f + s) > n = []
  | otherwise = (f+s) : go n s (f+s)--}

-- Fibonacci numbers that end with 3 and are less than or equal to n.

problem2 n = go n 1 1
 where
 go n f s
  | (f + s) > n = []
  | otherwise = if (last((show(f+s))) == '3') then (f+s) : go n s (f+s) else go n s (f+s)


{-- 3. Create a list from numbers 1 to n. The numbers must be either a multiple
of five or have exactly three factors.--}

-- problem3 100 --> [4,5,9,10,15,20,25,30,35,40,45,49,50,55,60,65,70,75,80,85,90,95,100]

-- List of numbers 1 to n with multiple of 5.
-- problem3 n = [ x | x <- [1..n], x `mod` 5 == 0 ]

-- List of numbers that are multiples of 5 or have exactly three factors.

problem3 n = [ x | x <- [1..n], x `mod` 5 == 0 || length(factorsOfX x) == 3]

factorsOfX x = [ y | y <- [1..x], x `mod` y == 0]



