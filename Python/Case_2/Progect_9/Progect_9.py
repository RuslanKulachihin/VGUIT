
"#-*-coding:utf-8-*-"
n = int(input("Введите любое число n : "))

if n == 1:
    print(0)

if n == 2:
    print(1)

if n == 3:
    print(2)
else:
    a = 0
    b = 1
    c = 1
    sum = 2
    for i in range(2,n):
        a = b+c
        b = c
        c = a
        sum = sum + c
    print(sum)
