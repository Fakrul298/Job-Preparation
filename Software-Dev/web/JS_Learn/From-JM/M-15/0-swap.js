//swaping with extra variable
var a = 5;
var b = 7;
console.log("Before swap>> a:",a, "b:", b);
var temp;
temp = a;
a = b;
b = a;
console.log("After swap>> a:",a, "b:", b);

//swaping without any extra variale

var v1 = 50;
var v2 = 20;
console.log("Before swap>> v1:",v1, "v2:", v2);
v1 = v1 + v2;
v2 = v1 - v2;
v1 = v1 - v2; // v1: v1 + v2  v2: v1- v2
console.log("After swap>> v1:",v1, "v2:", v2);

//swaping variable using JS

var x1 = 10, x2 = 100;
console.log("Before swap>> x1:",x1, "x2:", x2);
[x1,x2] = [x2,x1];
console.log("Before swap>> x1:",x1, "x2:", x2);
