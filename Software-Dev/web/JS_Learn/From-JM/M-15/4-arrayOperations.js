//get Max of array

function getMax(arr) {
  var max = arr[0];
  for (var i = 1; i < arr.length; i++) {
    if (arr[i] > max) max = arr[i];
  }
  return max;
}

// var a1 = [10, 20, 5, 9, 89, 19];
// console.log(getMax(a1));

// var a2 = [100, 20, 5, 9, 89, 19];
// console.log(getMax(a2));

//get sum of the array

function getSum(arr) {
  var sum = 0;
  for (var i = 0; i < arr.length; i++) {
    sum += arr[i];
  }
  return sum;
}
var a1 = [10, 20, 5, 9, 89, 19];
console.log(getSum(a1));

//remove duplicate from the array

function removeDuplicate(arr) {
  var unique = [];
  for (var i = 0; i < arr.length; i++) {
    if ( unique.indexOf(arr[i]) == -1) unique.push(arr[i]);
  }
  return unique;
}
var a1 = [10, 20, 10, 2, 1, 1, 2, 5, 9, 89, 19];
console.log(removeDuplicate(a1));
