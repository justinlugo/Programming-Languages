// console.log(rectanglePerimeter(2,8));
function rectanglePerimeter ( width, height )
{
    let perimeter = 0;
    perimeter = (width * 2) + (height * 2);
    return perimeter;
}

// console.log(rectangleArea(2,8));
function rectangleArea ( width, height )
{
    let area = 0;
    area = width * height;
    return area;
}

// console.log(circlePerimeter(5));
function circlePerimeter ( radius )
{
    let perimeter = 0;
    perimeter = 2 * Math.PI * radius;
    return perimeter;
}

// console.log(circleArea(5));
function circleArea ( radius )
{
    let area = 0;
    area = Math.PI * (radius ** 2);
    return area;
}