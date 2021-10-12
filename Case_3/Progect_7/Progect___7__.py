
"#-*-coding:utf-8-*-"
n = int(input("Введите любое число n : "))
summ = 1;
sum =0;
for i in range(1,n+1):
    summ *= i
    sum += summ
print(sum)
