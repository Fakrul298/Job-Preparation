var authors =  document.getElementsByClassName('author')

for (let i = 0; i < authors.length; i++) {
    var element = authors[i];

    element.style.color = 'lightblue'
    element.style.marginLeft = '10px'
    element.style.fontStyle = 'italic'
    element.innerHTML = 'Lekhok' +"-" + (i+1)
    element.setAttribute('title','This is a author')
    // console.log(element);
}

var articleHeadings = document.querySelectorAll('.special .articleHead')
for (let i = 0; i < articleHeadings.length; i++) {
    var element = articleHeadings[i];
    
    element.style.color = 'tomato';
    element.style.fontSize = '25px';

}

document.querySelector(".special .articleHead").style.backgroundColor = 'black'

var article1 = document.getElementById('article-1');
var newPara = document.createElement('p');
newPara.innerHTML = "Hello.. This is a new paragraph which is added from javascript"

article1.appendChild(newPara)


var glist = document.getElementById('gift-list');
var newItem = document.createElement('li');
newItem.innerHTML = 'Brand new Item';
glist.appendChild(newItem)

