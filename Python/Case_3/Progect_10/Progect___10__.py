"#-*-coding:utf-8-*-"
n = int(input("Введите количество чисел из ряда Фебоначи N : "))
k = int(input("Введите любое порядковый номер в ряду с которого нужно начать K : "))
fibanachi = [0]*(n+k)
fibanachi[0] = 0
fibanachi[1] = 1
fibanachi[2] = 1
for i in range(3,n+k):
    fibanachi[i] = fibanachi[i-1]+fibanachi[i-2]
sum= 0
for i in range(k-1,n+k):
    sum = fibanachi[i]+sum

print(sum)
