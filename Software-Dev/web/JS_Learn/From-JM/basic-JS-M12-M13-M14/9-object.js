var stud1 = {
    id:1703068,
    studentName: "Md Fakrul Islam Taraque",
    studious: false
}
console.log(stud1)
var studiousProperty = "studious"

//getting object element
console.log(stud1.studious);
console.log(stud1["studious"]);
console.log(stud1[studiousProperty]);

//updateing object element
stud1.studious = true;
console.log(stud1)

stud1["studious"] = null;
console.log(stud1)

stud1[studiousProperty] = false;
console.log(stud1)

//adding new property to the object

stud1.phoneNumber1 = "0193978724"
console.log(stud1)

stud1["phoneNumber2"] = "0191155124"
console.log(stud1)

var phoneNumberProperty = "phoneNumber3";
stud1[phoneNumberProperty] = "0172538149";
console.log(stud1)