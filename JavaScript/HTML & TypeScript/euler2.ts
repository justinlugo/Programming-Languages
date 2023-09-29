// Sum of even-value Fibonacci terms.
function evenFib(num: number): number{
    let sum = 0;
    let fib1 = 1;
    let fib2 = 1;

    for (let i = 2; i < num; i++)
    {
        let fib = fib1 + fib2;
        if (fib < num)
        {
            fib2 = fib1;
            fib1 = fib;
            if (fib % 2 == 0)
            {
                sum += fib;
            }
        }
    }
    return sum;
}
console.log(evenFib(4000000));