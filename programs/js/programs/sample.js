/*
console.log("Printing sample program")
let a = 10;
console.log("The value of a is " + a)
console.log(`The value of a is ${a}`)




let num1 = 10;
let num2 = 5;
let sum = num1 + num2; // 15
let sub = num1 - num2; // 5
let mul = num1 * num2; // 50
let div = num1 / num2; // 2
let remainder = num1 % num2; // 0

console.log(`The sum of ${num1} and ${num2} is ${sum}`);
console.log("The sum of " + num1 + " and " + num2 + " is " + sum);
*/

// (a+b)^2 = a^2 + 2ab + b^2
//
// let a = 10
// let b = 20
// let result = a*a + 2*a*b + b*b;
// console.log(result); // 900

let minutes = 782;
let hour = parseInt(minutes / 60);
let remainingMinutes = minutes % 60;
console.log(`${minutes} minutes = ${hour} hours ${remainingMinutes} minutes`);


let fahrenheit = 98.4
let celsius = (fahrenheit - 32) * (5/9);
console.log(`${fahrenheit} Fahrenheit = ${celsius} Celsius`);


let length = 10;
let breadth = 3;
let perimeter = 2*(length + breadth);
let area = length * breadth;
console.log(`The area and perimeter of rectangle with sides ${length} and ${breadth} is ${area} and ${perimeter}`);


let number = 21
if (number % 2 === 0) {
    console.log("Number is even");
} else {
    console.log("Number is odd");
}

let x = 10;
let y = 20;
if (x > y) {
    console.log(`${x} is greater than ${y}`);
} else {
    console.log(`${y} is greater than ${x}`);
}
