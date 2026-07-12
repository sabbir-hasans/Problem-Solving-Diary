// console.log("Hello sabbir");


// console.log(name);

// const interestRate = 0.3;
// // interestRate = 1;
// console.log(interestRate);

// // let name = 'Sabbir';
// // let age = 30;
// // let isApproved = false;
// // let firstName = undefined;
// // let selectedColor = null;

// // let name = 'sabbir';
// // let age = 30;
// let persion = {
//     name: 'Sabbie',
//     age: 30
// };
// //Dot Notation
// persion.name = 'sakil';
//Bracket Notation
// // persion['name'] = 'Taslim'
// let selection = 'name';
// persion[selection] = 'mary';
// console.log(persion.name);

// let selectedColors = ['red','blue'];
// selectedColors[3] = 'green';
// console.log(selectedColors);

//function declaration performing task
// function greet(name){
//     console.log('Hello ' + name);
// }
// greet('sabbir');

//calculateing a value
// function square(number){
//     return number * number;
// }

// let number = square(2);
// console.log(square(2));



// let x = 10;
// let y = 3;

// console.log(x + y);
// console.log(x - y);
// console.log(x * y);
// console.log(x / y);
// console.log(x % y);
// console.log(x ** y);
//------------------------------------------
// Read, Write, Execute
// 00000100
// 00000010
// 00000001

// const readPermission = 4;
// const writePermission = 2;
// const executePermission = 1;

// let myPermission = 0;
// myPermission = myPermission | readPermission | writePermission;


// let message = (myPermission & readPermission) ? 'yes' : 'no';

// console.log(message);


// let a = 'red';
// let b = 'blue';

// let c = a;
// a = b;
// b = c;

// console.log(a);
// console.log(b);

// for (let i = 0; i <= 5; i++) {
//     if (i % 2 != 0) console.log(i);
// }

// let i = 0;
// while(i <= 5) {
//     if (i % 2 != 0) console.log(i);
//     i++;
// }

//    let i = 0;
//    do{
//     if(i % 2 !== 0) console.log(i);
//     i++;
//    }while(i <= 5);


// const person = {
//     name: 'Mosh',
//     age: 30
// };
// for(let key in person)
// console.log(key,person[key]);

// // //dot notation
// // person.name;

// // //braclet Notation
// // person['name'];

// const color = ['red', 'green', 'blue'];

// for(let index in color)
//     console.log(index,color[index]);


// const colors = ['red', 'green', 'blue'];
// const person = {
//     name: 'Mosh',
//     age: 30
// };
// for (let person of person)
//     console.log(person);

// object oriented programming
// const circle = {
//     radius: 1,
//     location: {
//         x: 1,
//         y: 1
//     },

//     isVisible: true,
//     draw: function () {
//         console.log('draw');
//     }
// };
// circle.isVisible(); 

//Factory Function

function createCircle(radius){
    return {
        radius,
        draw() {
            console.log('draw');
        }
    };  
}

const circle1 = createCircle(1);
console.log(circle1);