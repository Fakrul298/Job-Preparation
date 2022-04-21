
//normal way
var v1 = 1, v2 = 200, v3 = 1000;

if(v1>v2){
    if(v1>v3) console.log("v1 is bigger");
    else console.log("v3 is bigger");
}
else{
    if(v2>v3) console.log("v2 is bigger");
    else console.log("v3 is bigger");
}

//JS way

var max = Math.max(v1,v2,v3);

if(max == v1) console.log("v1 is bigger");
else if(max == v2) console.log("v2 is bigger");
else console.log("v3 is bigger");