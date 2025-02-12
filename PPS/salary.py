basic = int(input("Enter your basic pay: "))

hra = 0.1*basic
ta = 0.05*basic

salary = basic+hra+ta

tax = 0.02*salary
net = salary-tax

print("basic salary is ", basic)
print("hra is ", hra)
print("ta is ", ta)
print("total salary is ", salary)
print("Your net salary is ", net)
