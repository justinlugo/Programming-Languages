// Sum of all multiples of 3 or 5 below 1000.
function sumOfMultiples3Or5(num: number): number{
    let sum = 0;
    for (let i = 0; i < num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
 return sum;
}
console.log(sumOfMultiples3Or5(1000));