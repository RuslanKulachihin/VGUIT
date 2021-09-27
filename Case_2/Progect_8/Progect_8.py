"#-*-coding:utf-8-*-"
def p(a,b,c):
   if a==b==c:
       return 3
   if a==b or b==c or a==c:
       return 2
   return 0
        
a=int(input('Введите любое число A : '))
b=int(input('Введите любое число B : '))
c=int(input('Введите любое число C : '))
print(p(a,b,c))

    