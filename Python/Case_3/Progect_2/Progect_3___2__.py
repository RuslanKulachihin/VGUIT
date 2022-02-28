"#-*-coding:utf-8-*-"
a = int(input("Введите любое число a : "))
b = int(input("Введите любое число b : "))

if a<b:
    for i in range(a,b+1):
        print(i)
else:
    for i in range(a,b-1,-1):
        print(i)
print()



