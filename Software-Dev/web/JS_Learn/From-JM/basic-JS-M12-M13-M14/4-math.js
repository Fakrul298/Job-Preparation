var num = -4.49999999;

var absNum = Math.abs(num);
console.log(absNum);

var roundNum = Math.round(num);
console.log(roundNum);
//================== rounding of >=0.5 ====================
var negativeRound1 = -4.50000000;
console.log("Math.round(",negativeRound1,"):",Math.round(negativeRound1));

var positiveRound1 = 4.50000000;
console.log("Math.round(",positiveRound1,"):",Math.round(positiveRound1));

var negativeRound2 = -4.50000001;
console.log("Math.round(",negativeRound2,") :",Math.round(negativeRound2));

var positiveRound3 = 4.50000001;
console.log("Math.round(",positiveRound3,") :",Math.round(positiveRound3));

var positiveRound2 = 4.49999;
console.log("Math.round(",positiveRound2,") :",Math.round(positiveRound2));

var negativeRound3 = -4.49999;
console.log("Math.round(",negativeRound3,") :",Math.round(negativeRound3));

//===================== ceil() - floor() ==================

var forCeilNum = 4.000000001
console.log("\n\nMath.ceil(",forCeilNum,") :",Math.ceil(forCeilNum))

var forFloorNum = 4.99999999999
console.log("Math.floor(",forFloorNum,") :",Math.floor(forFloorNum))

//===================== random number  =====================
var randomNumber = Math.random()
console.log(randomNumber, Math.ceil(randomNumber*10))

var cnt = [0]
for(var i=0; i<=12; i++){
    cnt[i] = 0;
}

for (let i = 0; i<=10000000; i++) {
    var rand = Math.ceil(Math.random()*10);
    //console.log(rand);
    cnt[rand] = cnt[rand]+1
    // if(rand>=10 || rand<=0)
    //     console.log("here is : ",rand)

}

for(var i=0; i<=12; i++){
    console.log(i,"-",cnt[i]);
}

console.log(Math.ceil((Math.random()*6)))