var ages = [10,17,21,22,25]
var age2Index = ages.indexOf(21);
console.log(age2Index)
console.log(typeof ages)

ages.push(100)
ages.push(101)
console.log(ages)

ages.pop()
console.log("after one pop: ",ages)

ages.pop()
console.log("after two pop: ",ages)


ages.unshift(101)
console.log("after unshift 101: ",ages)
ages.unshift(100)
console.log("after unshIft 100: ",ages)


var slicedFromAgesPos2 =  ages.slice(2);
console.log("after slicing from 2: ", slicedFromAgesPos2)

var slicedFromAgesPos2To4 =  ages.slice(2,4);
console.log("after slicing from 2: ", slicedFromAgesPos2To4)


var arrayForSpilce = [14,15,16,17,18];
console.log("Before splice: ",arrayForSpilce)
arrayForSpilce.splice(arrayForSpilce.length,0,19)
console.log("after arrayForSpilce.length,0,19: ",arrayForSpilce)

// Array.splice(position, count, value)
// position = at which position i want to insert value
// count = from index position, how many values should be discarded
// value = which value i want to insert

arrayForSpilce.splice(0,1,20)
console.log("arrayForSpilce.splice(0,1,20) :", arrayForSpilce);

arrayForSpilce.splice(0,2,200)
console.log("arrayForSpilce.splice(0,2,20) :", arrayForSpilce);



console.log("after arrayForSpilce.splice(0,1,20): ",arrayForSpilce.sort())

