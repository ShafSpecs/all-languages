const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter the radius of your circle? ', function (radius: number) {
    console.log(`The circumference is: ${2 * Math.PI * radius}, and the area is: ${Math.PI * (radius ** 2)}`);
    rl.close();
});
