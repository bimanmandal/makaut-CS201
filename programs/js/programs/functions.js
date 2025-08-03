// console.log("Hello World!");
// Return: No #inputs: 1
function print(input) {
    console.log(`Printing from function ${input}`);
}
//
// print("Hello World!");
// print("Babai");

// Return: yes #inputs: 2
function sumRaka(num1, num2) {
    let result =  num1 + num2;
    return result;
}

// Return: yes #inputs: 2
function addition(num1, num2) {
    return sumRaka(num1, num2);
}

let total = sumRaka(100, 200)
print(total)
print(sumRaka(100, 200))

// Return: no #inputs: 0
function printHelloWorld() {
    console.log("Hello world");
}

// Return: yes #input: 0
function getRandomInt() {
    return Math.floor(Math.random() * 50)
}

function sumRaka2(num1, num2) {
    let result =  num1 + num2;
    return result;
}

let sumBabai = (num1, num2) => {
    return num1 + num2;
}

