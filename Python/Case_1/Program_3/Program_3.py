"#-*-coding:utf-8-*-"
age=int(input("Лет : "))
name=input("имя : ")
if age>0 and age<75 and name!="Иван":
    if age>=18:
        print("Поздровляю вы поступили в ВГУИТ")
    else:
        print("Сначала вам нужно окончить школу")
        age=16-age
        print("Осталось: ",age," лет ")

