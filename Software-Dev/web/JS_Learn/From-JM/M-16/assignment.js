function feetToMile(feet){
    if(feet<0) console.log("Length can't be negative")
    return feet*0.000189394;
}
console.log(feetToMile(100))



function woodCalculator(chair = 0, table = 0, bed = 0){
    return chair + table*3 + bed*5;
}
console.log(woodCalculator(1,1,1))

//1st 10: 15 feet
//next: 12 feet
// per feet : 1000 brick

function brickCalculator(storied){
    if(storied <=0 ) console.log("Please insert storied number perfectly");
    var brick, totalFeet;
    if(storied > 10){
        totalFeet = 10 * 15 + (storied - 10) * 12;
    }
    else
    totalFeet = storied * 15;
    brick = totalFeet * 1000;
    console.log("total feet : ",totalFeet);
    return brick;
}
console.log(brickCalculator(19))

function tinyFriend(names){
    var tinyName = names[0] , isEmpty = false, emptyName = 0;
    for(var i=1; i<names.length; i++){
        if(names[i].length == 0 || tinyName.length == 0){
            isEmpty = true;
            emptyName++;
        }
        if(names[i].length < tinyName.length) tinyName = names[i];
    }
    if(isEmpty) console.log("You have inserted", emptyName, "empty name!");
    return tinyName;
}

var ruetFriends = ["sakib", "sajib","Moba", "Jahid"]
console.log(tinyFriend(ruetFriends))
