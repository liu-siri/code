import random as r
import time as t
start=t.perf_counter()
N=10000*10000
hits=0
for i in range(1,N+1):
    x=r.random()
    y=r.random()
    if pow(x**2+y**2,0.5)<=1:
        hits+=1
pi=4*hits/N
print("当N为{}时PI的近似值为{}".format(N,pi))
print("运算时间为{}s".format(t.perf_counter()-start))
