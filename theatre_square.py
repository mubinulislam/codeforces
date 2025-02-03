from math import ceil
n,m,a=map(int,input().split())
x=ceil(n/a)
y=ceil(m/a)
print(x*y)