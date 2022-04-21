function addNumbers(num1,num2){
    console.log(arguments);

    // converting arguments to Array
    var nums = [...arguments]
    nums.push(1000);
    console.log(nums);


    var sum = 0;
    for (let i = 0; i < arguments.length; i++) {
        var num = arguments[i];
        sum += num;
    }
    return sum;
}

var result = addNumbers(10,20,30,40)
console.log(result);