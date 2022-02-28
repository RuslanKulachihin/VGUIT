"#-*-coding:utf-8-*-"
def p(a,b):
   if a<b:
       return a
   return b
        
a=int(input('Введите любое число A : '))
b=int(input('Введите любое число B : '))
c=int(input('Введите любое число C : '))
big = p(p(a,b),c)
print(big)

    