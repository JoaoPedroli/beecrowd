var input = require("fs").readFileSync(__dirname + "/input.txt", "utf8");
var lines = input.split("\n");

// ----------------

const re = () => lines.shift();
const ri = () => parseInt(re());
const rf = () => parseFloat(re());

const t = ri();
let ans1, ans2;
for (let i = 0; i < t; ++i) {
  ans1 = 0;
  ans2 = 0;
  const [nn1, op1, dd1, op, nn2, op2, dd2] = re().split(' ');
  
  const n1 = parseInt(nn1);
  const d1 = parseInt(dd1);
  const n2 = parseInt(nn2);
  const d2 = parseInt(dd2);
  ans2 = d1 * d2;
  if (op == "+") ans1 = n1 * d2 + n2 * d1;
  else if (op == "-") ans1 = n1 * d2 - n2 * d1;
  else if (op == "*") ans1 = n1 * n2;
  else (ans1 = n1 * d2), (ans2 = n2 * d1);
  const mdc = gcd(Math.abs(ans1), Math.abs(ans2));
  console.log(`${ans1}/${ans2} = ${ans1 / mdc}/${ans2 / mdc}`);
}

function gcd(a, b) {
  let Remainder;

  while (b != 0) {
    Remainder = a % b;
    a = b;
    b = Remainder;
  }

  return a;
}
