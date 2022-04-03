var input = require('fs').readFileSync(__dirname + '/input.txt', 'utf8');
var lines = input.split('\n');

const re = () => lines.shift();
const ri = () => parseInt(re());

a = ri();
b = ri();

console.log(`X = ${a + b}`);
