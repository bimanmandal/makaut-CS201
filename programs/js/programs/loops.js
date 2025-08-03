// console.log(1);
// console.log(2);
// console.log(3);
// console.log(4);
// console.log(5);
// console.log(6);
// console.log(7);
// console.log(8);
// console.log(9);
// console.log(10);

console.log("Printing using loop ");
// for (let i = 1; i <= 10; i = i + 1) {
//     console.log(i);
// }

// let i = 1
// for (; i <= 10; i = i + 1) {
//     console.log(i);
// }

// let i = 1
// for (; i <= 10; ) {
//     console.log(i);
//     i = i + 1
// }

// let i = 1
// while(i <= 10) {
//     console.log(i);
//     i = i + 1
// }

// let i = 10;
// while (i > 0) {
//     console.log(i);
//     i = i - 1;
// }


// 20 x 1 = 20
// 20 x 2 = 40
// 20 x 3 = 60

// let multiplier = 1;
// while(multiplier <= 10) {
//     let result = 97 * multiplier;
//     console.log(`97 x ${multiplier} = ${result}`);
//     multiplier++;
//     // multiplier += 1;
//     // multiplier = multiplier + 1
// }


let students = ["Ceaser", "Poltus", "Babai", "Biki", "Appu"]
// let i = 0;
// while (i <= 4) {
//     console.log(students[i]);
//     i ++;
// }

// for (const student of students) {
//     console.log(`Hello ${student}!`);
// }

// students.forEach((student) => {console.log(`Hello ${student}!`);});


let items = [250, 645, 300, 900, 50]
for (let i = 0; i < items.length; i++) {
    items[i] = items[i] - (10 / 100) * items[i];
}
console.log(items);

