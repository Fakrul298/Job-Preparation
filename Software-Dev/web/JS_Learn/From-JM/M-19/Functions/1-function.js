function evenify(num){
    if(num%2 == 1) num*=2;
    return num;
}

function evenifiyngArray(nums){
    for (let i = 0; i < nums.length; i++) {
        var num = nums[i];
        console.log(evenify(num));
    }
}

nums = [10,13,5,7,19,20,23]

evenifiyngArray(nums)