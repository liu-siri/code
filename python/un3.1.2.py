import random as r
N=eval(input())
hit=0
r.seed(123)
for i in range(1,N+1):
    x=r.random()
    y=r.random()
    if(pow(x**2+y**2,0.5)<=1):
        hit+=1
pi=4*hit/N
print("{:.6f}".format(pi))
