"#-*-coding:utf-8-*-"
def sum_a(a,n):
    n = n-1
    return 2*a*n+a

def sum_b(b,n):
    n = n-1
    return 2*b*n

a = int(input("Расстояние между рядами : "))
b = int(input("Расстояние между дырочками в ряду : "))
l = int(input("Количество дырочек в каждом ряду :  "))
n = int(input("Длина свободного конца шнурка :  "))

leght = sum_a(a,n) + sum_b(b,n)+2*l

print(leght)