var input = require('fs').readFileSync(__dirname + '/input.txt', 'utf8');
var lines = input.split('\n');

// ----------------

const re = () => lines.shift();
const ri = () => parseInt(re());
const rf = () => parseFloat(re());

const v = rf(), pi =3.14159;

console.log(`A=${(pi*v*v).toFixed(4)}`);

