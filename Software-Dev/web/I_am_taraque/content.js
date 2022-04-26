let myImages = [
    "https://www.google.com/imgres?imgurl=https%3A%2F%2Fm.media-amazon.com%2Fimages%2FM%2FMV5BNTczMzk1MjU1MV5BMl5BanBnXkFtZTcwNDk2MzAyMg%40%40._V1_UY1200_CR99%2C0%2C630%2C1200_AL_.jpg&imgrefurl=https%3A%2F%2Fwww.imdb.com%2Fname%2Fnm0000226%2Fmediaindex&tbnid=5vVjyeNWbiMJSM&vet=12ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygAegUIARC0AQ..i&docid=4g76RRqAQ9dAHM&w=630&h=1200&q=will%20smith%20all%20images&ved=2ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygAegUIARC0AQ",
    "https://www.google.com/imgres?imgurl=https%3A%2F%2Fst.depositphotos.com%2F1814084%2F1707%2Fi%2F600%2Fdepositphotos_17075365-stock-photo-will-smith.jpg&imgrefurl=https%3A%2F%2Fdepositphotos.com%2Fstock-photos%2Fwill-smith.html&tbnid=S6FSTLW-WSj0eM&vet=12ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygHegUIARDGAQ..i&docid=kn07r0FrwpYrLM&w=401&h=600&q=will%20smith%20all%20images&ved=2ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygHegUIARDGAQ",
    "https://www.google.com/imgres?imgurl=https%3A%2F%2Fmedia.gq.com%2Fphotos%2F6241e383d3c1606db058cdb2%2F16%3A9%2Fw_2560%252Cc_limit%2F1388161660&imgrefurl=https%3A%2F%2Fwww.gq.com%2Fstory%2Foscars-2022-review-coda-best-picture-apple-will-smith-chris-rock&tbnid=b5S4xPWNoxGAzM&vet=12ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygTegUIARDhAQ..i&docid=JwK8xnhAictrTM&w=2560&h=1440&q=will%20smith%20all%20images&ved=2ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygTegUIARDhAQ",
    "https://www.google.com/imgres?imgurl=https%3A%2F%2Fimage.shutterstock.com%2Fimage-photo%2Fcannes-france-may-23-will-260nw-672516052.jpg&imgrefurl=https%3A%2F%2Fwww.shutterstock.com%2Fsearch%2Fwill%2Bsmith&tbnid=Z3z5KLnAjxqpjM&vet=12ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygtegUIARCdAg..i&docid=KRTTkDuyaYOptM&w=390&h=280&q=will%20smith%20all%20images&ved=2ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygtegUIARCdAg",
    "https://www.google.com/imgres?imgurl=https%3A%2F%2Fimg.republicworld.com%2Frepublic-prod%2Fstories%2Fpromolarge%2Fxhdpi%2Fng2heixftgjmjnes_1615982828.jpeg&imgrefurl=https%3A%2F%2Fwww.republicworld.com%2Fentertainment-news%2Fhollywood-news%2Fdyk-will-smith-memorized-lines-of-all-cast-members-from-the-fresh-prince-of-bel-air.html&tbnid=VGFnyZ41adrFRM&vet=12ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygzegQIARAy..i&docid=uf2i-rMgbtzH-M&w=768&h=439&q=will%20smith%20all%20images&ved=2ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMygzegQIARAy",
    "https://www.google.com/imgres?imgurl=https%3A%2F%2Fi.insider.com%2F5d8e138d2e22af718d6c276b%3Fwidth%3D1040%26format%3Djpeg&imgrefurl=https%3A%2F%2Fwww.businessinsider.com%2Fwill-smiths-gemini-man-is-groundbreaking-for-hollywood-animation-2019-9&tbnid=flIcuPT4oBE3AM&vet=12ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMyhmegUIARCrAQ..i&docid=chPC9z-Nw0RNLM&w=1040&h=780&q=will%20smith%20all%20images&ved=2ahUKEwiY8dyo07H3AhWmkdgFHWG0B80QMyhmegUIARCrAQ"
    // "https://drive.google.com/file/d/1PsEIZSNKsF6zJaBF-uHc869rVmpaLgLV/view?usp=sharing",
    // "https://drive.google.com/file/d/1752s-B3kXXnXO9GSUEw_dLmOXKNKTtFz/view?usp=sharing",
    // "https://drive.google.com/file/d/1Fw577_PK7SxWqD_cSnxcJ69NWtcugmbh/view?usp=sharing",
    // "https://drive.google.com/file/d/1k2bTJoYxpnRrcFJUMo5uG-XlsuD2hf2r/view?usp=sharing",
    // "https://drive.google.com/file/d/1qoJc0G3y6CfyAooCCpR7QnNKoTNRcgG3/view?usp=sharing",
    // "https://drive.google.com/file/d/1DqSRi9eRHa3QmwW0fcCfN_NmmffCPSvF/view?usp=sharing"
]

let imgs = document.getElementsByTagName("img")
for(let i = 0; i<imgs.length; i++)
{
    const randomImg = Math.floor(Math.random() * myImages.length)
    imgs[i].src = myImages[randomImg]
}