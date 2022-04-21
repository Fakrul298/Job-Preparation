function forNegative(){
    return 'a negative number';
}

function forPositive(){
    return 'a Positive number';
}

function forZero(){
    return 'zero';
}

function numberRange(num, range){
    console.log(num,"is",range());
    
}

numbers = [10,20,-10,0,1,-4]

for (let i = 0; i < numbers.length; i++) {
    let num = numbers[i];
    let functionName;
    if(num == 0) functionName = forZero;
    else if(num > 0) functionName = forPositive;
    else functionName = forNegative;
    numberRange(num,functionName);
    
}