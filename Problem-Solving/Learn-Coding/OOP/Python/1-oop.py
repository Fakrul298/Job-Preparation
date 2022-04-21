class STUDENT:
    def __init__(self, name, roll, marks):
        self.name = name
        self.roll = roll
        self.marks = marks
    def checkPassFail(self):
        if self.marks >= 40: 
            return True
        else:
            return False

stud1 = STUDENT('Toba', 1, 90) 
STUDENT.roll = 12
print(STUDENT.roll)
print(stud1.checkPassFail())