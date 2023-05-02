#请在...补充代码
import random

def genpwd(length):
    b=1
    a=1
    for i in range(length-1):
        a*=10
    for i in range(length):
        b*=10
    ans=random.randint(a,b)
    return ans

length = eval(input())
random.seed(17)
for i in range(3):
    print(genpwd(length))
