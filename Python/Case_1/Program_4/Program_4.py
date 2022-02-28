r"# -*- coding: utf-8 -*-"
seconds=int(input("Введите секунды:") )
seconds=seconds % (24*3600)
hour=seconds // 3600 
seconds %= 3600
minuts=seconds // 60
seconds %= 60
day=hour % 24
print (day,"Дней",hour,"Часа",minuts,"Минуты",seconds,"Секунды")
print()




