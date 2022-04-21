function strReverse(str){
    var rev = "";
    for(var i=0; i<str.length; i++){
        rev = str[i] + rev;
    }
    return rev;
}

var str = "Eid Mubarak!"
console.log(strReverse(str))