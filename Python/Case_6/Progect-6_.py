





# -*- coding: utf-8 -*-
from tkinter import *

def squareUp():
    arg = txt.get()
    i = 1
    N = int(arg)
    result = ""
    while i * i <= N:
        i+=1
        result += str(i)
    resultlbl_2.configure(text = result)

def findDel():
    arg = txt1.get()
    i = 2
    N = int(arg)
    while N % i != 0:
        i += 1
    resultlbl1_2.configure(text = i)

def powFinder():
    arg = txt2.get()
    i = 2
    powContainer = 2
    counter = 1
    N = int(arg)

    while powContainer * i < N:
        powContainer *= i
        counter+=1
    result = "Степень: " + str(powContainer) + " " + "\n Показатель степени: " + str(counter) 
    resultlbl2_2.configure(text = result)

def sport():
    x = int(txt3_1.get())
    y = int(txt3_2.get())
    counter = 1
    while x < y:
        x *= 1.1
        counter+=1
    resultlbl3_2.configure(text = counter)

until0Counter1 = 0
def until0():
    global until0Counter1
    arg = txt4.get()
    print(arg)
    if(arg != "0"):
        until0Counter1 += 1
        print(until0Counter1)
    else:
        resultlbl4_2.configure(text = until0Counter1)
        until0Counter1 = 0
    txt4.delete(0, END)

until0Counter2 = 0
sum = 0
def until0Average():
    global until0Counter2
    arg = txt5.get()
    global sum
    if arg != "0":
        until0Counter2+=1
        sum += int(arg)
    else:
        resultlbl5_2.configure(text = sum / until0Counter2)
        until0Counter2 = 0
        sum = 0
    txt5.delete(0, END)

until0Counter3 = 0
container = 10000000
def until0Bigger():
    arg = txt6.get()
    global until0Counter3
    global container
    if(int(arg) > container):
        until0Counter3+=1
    container = int(arg)
    if(arg == "0"):
        resultlbl6_2.configure(text = until0Counter3)
        container = 100000
        until0Counter3 = 0
    txt6.delete(0, END)

until0Counter4 = 0
maxStreak = 0
def until0Streak():
    arg = txt7.get()
    global until0Counter4
    global container
    global maxStreak

    x = int(arg)
    if(x == container):
            until0Counter4 += 1
    else:
        if(maxStreak < until0Counter4):
            maxStreak = until0Counter4
        until0Counter4 = 1
    container = x
    if(x == 0):
        resultlbl7_2.configure(text = (max(maxStreak, until0Counter4)))
        container = 1000000
    txt7.delete(0, END)

window = Tk()
window.title("Добро пожаловать !!! ")
window.geometry('1000x400')
window.configure(bg='#DCDCDC')
lbl = Label(window, text = "Введите число", font="3", bg="#7FFFD4")
lbl.grid(column=0, row = 0)
txt = Entry(window, width = 15)
txt.grid(column=1, row = 0)
btn = Button(window, text = "Залание 1 вычислить", command = squareUp, font="3", bg="#7FFFD4")
btn.grid(column=2, row = 0)
resultlbl_1 = Label(window, text = "Результат: ", font="3", bg="#7FFFD4")
resultlbl_1.grid(column = 3, row = 0)
resultlbl_2 = Label(window, text = "", font="3", bg="#7FFFD4")
resultlbl_2.grid(column=4, row = 0)

lbl1 = Label(window, text = "Введите число", font="3", bg="#7FFFD4")
lbl1.grid(column=0, row = 1)
txt1 = Entry(window, width = 15)
txt1.grid(column=1, row = 1)
btn1 = Button(window, text = "Залание 2 вычислить",command = findDel, font="3", bg="#7FFFD4")
btn1.grid(column=2, row = 1)
resultlbl1_1 = Label(window, text = "Результат: ", font="3", bg="#7FFFD4")
resultlbl1_1.grid(column = 3, row = 1)
resultlbl1_2 = Label(window, text = "", font="3", bg="#7FFFD4")
resultlbl1_2.grid(column=4, row = 1)

lbl2 = Label(window, text = "Введите число", font="3", bg="#7FFFD4")
lbl2.grid(column=0, row = 2)
txt2 = Entry(window, width = 15)
txt2.grid(column=1, row = 2)
btn2 = Button(window, text = "Залание 3 вычислить", command = powFinder, font="3", bg="#7FFFD4")
btn2.grid(column=2, row = 2)
resultlbl2_1 = Label(window, text = "Результат: ", font="3", bg="#7FFFD4")
resultlbl2_1.grid(column = 3, row = 2)
resultlbl2_2 = Label(window, text = "", font="3", bg="#7FFFD4")
resultlbl2_2.grid(column=4, row = 2)

lbl3 = Label(window, text = "Введите 2 числа", font="3", bg="#7FFFD4")
lbl3.grid(column=0, row = 3)
txt3_1 = Entry(window, width = 15)
txt3_1.grid(column=1, row = 3)
txt3_2 = Entry(window, width = 15)
txt3_2.grid(column=2, row = 3)
btn3 = Button(window, text = "Залание 4 вычислить", command=sport, font="3", bg="#7FFFD4")
btn3.grid(column=3, row = 3)
resultlbl3_1 = Label(window, text = "Результат: ", font="3", bg="#7FFFD4")
resultlbl3_1.grid(column = 4, row = 3)
resultlbl3_2 = Label(window, text = "", font="3", bg="#7FFFD4")
resultlbl3_2.grid(column=5, row = 3)

lbl4_1 = Label(window, text = "Число 0 выведет результат", font="3", bg="#7FFFD4")
lbl4_1.grid(column=0, row = 4)
txt4 = Entry(window, width = 15)
txt4.grid(column=1, row = 4)
btn4 = Button(window, text = "Залание 5 вычислить", command=until0, font="3", bg="#7FFFD4")
btn4.grid(column=2, row = 4)
resultlbl4_1 = Label(window, text = "Результат: ", font="3", bg="#7FFFD4")
resultlbl4_1.grid(column = 3, row = 4)
resultlbl4_2 = Label(window, text = "", font="3", bg="#7FFFD4")
resultlbl4_2.grid(column=4, row = 4)

lbl5 = Label(window, text = "Число 0 выведет результат", font="3", bg="#7FFFD4")
lbl5.grid(column=0, row = 5)
txt5 = Entry(window, width = 15)
txt5.grid(column=1, row = 5)
btn5 = Button(window, text = "Залание 6 вычислить", command=until0Average, font="3", bg="#7FFFD4")
btn5.grid(column=2, row = 5)
resultlbl5_1 = Label(window, text = "Результат: ", font="3", bg="#7FFFD4")
resultlbl5_1.grid(column = 3, row = 5)
resultlbl5_2 = Label(window, text = "", font="3", bg="#7FFFD4")
resultlbl5_2.grid(column=4, row = 5)

lbl6 = Label(window, text = "Число 0 выведет результат", font="3", bg="#7FFFD4")
lbl6.grid(column=0, row = 6)
txt6 = Entry(window, width = 15)
txt6.grid(column=1, row = 6)
btn6 = Button(window, text = "Залание 7 вычислить", command=until0Bigger, font="3", bg="#7FFFD4")
btn6.grid(column=2, row = 6)
resultlbl6_1 = Label(window, text = "Результат: ", font="3", bg="#7FFFD4")
resultlbl6_1.grid(column = 3, row = 6)
resultlbl6_2 = Label(window, text = "", font="3", bg="#7FFFD4")
resultlbl6_2.grid(column=4, row = 6)

lbl7 = Label(window, text = "Число 0 выведет результат", font="3", bg="#7FFFD4")
lbl7.grid(column=0, row = 7)
txt7 = Entry(window, width = 15)
txt7.grid(column=1, row = 7)
btn7 = Button(window, text = "Залание 8 вычислить", command=until0Streak, font="3", bg="#7FFFD4")
btn7.grid(column=2, row = 7)
resultlbl7_1 = Label(window, text = "Результат: ", font="3", bg="#7FFFD4")
resultlbl7_1.grid(column = 3, row = 7)
resultlbl7_2 = Label(window, text = "", font="3", bg="#7FFFD4")
resultlbl7_2.grid(column=4, row = 7)
window.mainloop()
