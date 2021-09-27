r"# -*- coding: utf-8 -*-"
seconds=int(input("Введите секунды:") )
seconds=seconds % 60
minuts=seconds % 60
hour=minuts % 60 % 24
day=hour % 24
print (day,"Дней",hour,"Часа",minuts,"Минуты",seconds,"Секунды")




