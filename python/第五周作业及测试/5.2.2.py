# 请在...补充一行或多行代码

def prime(m):
    if m==2 or m==3:
        return 1
    else:
        for i in range(2,m):
            if m%i==0:
                return 0
        return 1

n = eval(input())
n=int(n)
count=0
while(count<5):
    if prime(n):
        if count!=0:
            print(",",end="")
        print(n,end="")
        count+=1
    n+=1
