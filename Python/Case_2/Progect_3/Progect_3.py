"#-*-coding:utf-8-*-"
m=int(input("Введите число минут, прошедшее с начала суток :"))
s = m * 60
h = s // 3600 
s %= 3600
m = s // 60
s %= 60
d = h // 24
if h>24: h = h - (24*d)
print(h,": Часы",m, ": Минуты")
print()





