function wordCounter(str){
    var word = 0;
    for(var i = 0; i<str.length; i++){
        if(str[i] == ' ' && str[i-1] != ' ') word++;
    }
    return word + 1;
}

var str = "Hello tumi nol bashi, Apnake sagotom  arekti  notun video te, lokta beshi kotha bole!!  ei chop! chop! sob chop!";

console.log(wordCounter(str));