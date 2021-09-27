# -- coding: utf-8 --
n = int(input("Количество n долек : "))
m = int(input("Количество m долек : "))
k = int(input("Из скольки долек состоит часть шоколада k ? "))
k1 = 0
def F(n,m,k,k1):
  k1 = (n*m) / 2
  if (k1==k):
    return 'yes'
  elif (k1!=k): return 'no'
print(F(n,m,k,k1)) 
