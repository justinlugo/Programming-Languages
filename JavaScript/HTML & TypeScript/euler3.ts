// Largest prime factor.
function largestPrimeFactor(num: number): number{
    let factor = 2;
    while (factor <= num)
    {
        if (num % factor == 0)
        {
            num /= factor;
        }
        else
        {
            factor++;
        }
    }
    return factor;
}
console.log(largestPrimeFactor(600851475143));