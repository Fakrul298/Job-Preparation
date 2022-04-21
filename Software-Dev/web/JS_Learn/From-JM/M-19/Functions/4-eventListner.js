function changeBGColorBW(){
    document.body.style.backgroundColor = 'Black';
    document.body.style.color = 'white';
    document.getElementById('btnBW').style.color = 'white'
    document.getElementById('btnBW').style.backgroundColor = 'black'
}

function changeBGColorRW(){
    document.body.style.backgroundColor = 'Red';
    document.body.style.color = 'white';
    document.getElementById('btnRed').style.color = 'white'
    document.getElementById('btnRed').style.backgroundColor = 'black'
}

const btnBg = document.getElementById('btnBW').onclick = changeBGColorBW;
const btnRW = document.getElementById('btnRed').addEventListener('click', changeBGColorRW)

document.getElementById('bigHead').addEventListener('click', function(){
    document.getElementById('head').style.fontSize = '40px';
})
