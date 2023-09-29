// Problem 1: Longest Collatz Sequence.
console.log(problem1(1000000));

function problem1(topLimit)
{
    let max = 0;
    for (let i = 1; i <= topLimit; i++)
    {
        let count = 1;
        let num = i;
        while (num > 1)
        {
            // If even, then divide by 2.
            if (num % 2 == 0)
            {
                num /= 2;
            }
            // Otherwise it's odd, multiply by 3 and add 1.
            else
            {
                num = num * 3 + 1;
            }
            count++;
        }
        
        // If the count of our current sequence is greater than our set max
        // then we set our max to the greater count, and store the index.
        if (count > max)
        {
            max = count;
            retVal = i;
        }
    }
    return retVal;
}

// Problem 2: Sum of the digits that make up a factorial.
console.log(String(problem2(100)));

// Find factorial of a number.
function factorial(num)
{
    let bigNum = BigInt(num);
    let factorial = 1n
    if (bigNum == 0n || bigNum == 1n)
        return 1n;
    for (let i = bigNum - 1n; i >= 1n; i--)
    {
        factorial *= i;
    }
    
    return factorial;
}

// Find the sum of the digits of a number.
function sumDigits(num)
{
    let sum = 0n;
    while (num > 0n)
    {
        sum += (num % 10n);
        num = (num / 10n);
    }
    return sum;
}

function problem2 (num)
{
    let bigNum = BigInt(num);
    return sumDigits(factorial(bigNum));
}