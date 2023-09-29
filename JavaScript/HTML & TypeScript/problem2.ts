// Solution should be 840.
console.log(problem2(1000));

// Right triangle with a perimeter of up to limit with the most amount of solutions.
function problem2 ( limit : number ) : number
{
    let retVal : number = 0;
    let maxNumSolutions : number = 0;

    // Given:
    // a^2 + b^2 = c^2
    // a + b + c = p
    
    // Therefore:
    // a + b + sqrt(a^2 + b^2) = p

    for (let p : number = 0; p <= limit; p++)
    {
        let numSolutions : number = 0;
        for (let a : number = 0; a <= p; a++)
        {
            for (let b : number = 0; b <= a; b++)
            {
                if (a + b + Math.sqrt(a**2 + b**2) == p)
                {
                    numSolutions++;
                }
            }
        }

        if (numSolutions > maxNumSolutions)
        {
            maxNumSolutions = numSolutions;
            retVal = p;
        }
    }
    return retVal;
}