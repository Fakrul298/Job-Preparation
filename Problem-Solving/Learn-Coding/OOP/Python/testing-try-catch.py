y = 0
try:
    result = x/y
    print(result)
except NotDivideByero:
    print("No Division by zero")
except varNotDeclare:
    print("Var is not declared")
except:
    print("Error Occured!")