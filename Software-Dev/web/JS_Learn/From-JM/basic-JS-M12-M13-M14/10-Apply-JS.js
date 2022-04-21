//inch to feet converter function
function inchToFeet(inch) {
  return inch / 12;
}
// console.log(inchToFeet(12));
// console.log(inchToFeet(120));

//Leap year checker function
function isLeapYear(year) {
  if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) return true;
  else return false;
}

function isLeapYear2(year) {
  if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
    return true;
  } else return false;
}
console.log("1700 : ", isLeapYear(1700));
console.log("1700-2 : ", isLeapYear2(1700));

console.log("2004 : ", isLeapYear(2004));
console.log("2004-2: ", isLeapYear2(2004));

console.log("1600 : ", isLeapYear(1600));
console.log("1600-2: ", isLeapYear2(1600));

console.log("2024 : ", isLeapYear(2024));
console.log("2024-2 : ", isLeapYear2(2024));

console.log("2012 : ", isLeapYear(2012));
console.log("2012-2 : ", isLeapYear2(2012));

function factorial(n) {
  if (n == 0 || n == 1) return 1;
  else return n * factorial(n - 1);
}
console.log("factorial(6): ",factorial(6))

//fibonacci series function
var fib = [0, 1];
function fibonacciIterative(n) {
  for (var i = 2; i < n; i++) {
    fib.push(fib[i - 1] + fib[i - 2]);
  }
  return fib[n - 1];
}

// console.log(fibonacciIterative(10));
// console.log(fib);

function fibonacciiRecursive(n) {
  if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else {
    return fibonacciiRecursive(n - 1) + fibonacciiRecursive(n - 2);
  }
}

console.log("fibonacciiRecursive(11): ",fibonacciiRecursive(11))

function fibonacciiSeries(n) {
  if (n == 0) {
    return [0];
  } else if (n == 1) {
    return [0, 1];
  } else {
    var fibSeries = fibonacciiSeries(n - 1);
    var nextElement = fibSeries[n - 1] + fibSeries[n - 2];
    fibSeries.push(nextElement);
    return fibSeries;
    // return fibonacciiRecursive(n - 1) + fibonacciiRecursive(n - 2);
  }
}

console.log(fibonacciiSeries(11));
