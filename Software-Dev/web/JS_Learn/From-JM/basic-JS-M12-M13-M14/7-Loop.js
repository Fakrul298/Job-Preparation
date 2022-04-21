var i = 0;
while(i<6){
    console.log(i);
    i++;
}

console.log("Printing For Loop: \n")
for(var j=0; j<5; j++){
    console.log(j);
}

var testNumber = 'A'
switch(testNumber){
    case 'A+':
        console.log("You have got A+")
        break;
    case 'A':
        console.log("You have got A")
        break;
    case 'B':
    case 'B-':
        console.log("You have got either B/B-");    
        break;
    default:
        console.log("Your grade is undefined");
        break;
}