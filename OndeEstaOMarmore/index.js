var input = require("fs").readFileSync(__dirname + "/input.txt", "utf8");
var lines = input.split("\n");

// ----------------

let ct = 0;
let nums = lines.shift().split(" ");
while (nums?.length === 2 && nums[0] !== "0" && nums[1] !== "0") {
  const n = parseInt(nums[0]);
  const m = parseInt(nums[1]);
  let ns = Array(n);

  const binary_search = (x, start, end) => {
    if (start > end) return -1;
    const mid = Math.floor((start + end) / 2);
    if (ns[mid] === x) return mid;
    if (ns[mid] > x) return binary_search(x, start, mid - 1);
    return binary_search(x, mid + 1, end);
  };

  console.log(`CASE# ${++ct}:`);
  for (let i = 0; i < n; ++i) ns[i] = parseInt(lines.shift());
  ns.sort((a, b) => a - b);
  for (let i = 0; i < m; ++i) {
    const x = parseInt(lines.shift()),
      index = binary_search(x, 0, ns.length - 1);
    if (index >= 0) console.log(`${x} found at ${index + 1}`);
    else console.log(`${x} not found`);
  }

  nums = lines.shift().split(" ");
}
