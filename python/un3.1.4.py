num=0
for i in range(100,1000):
    s=0
    copy=i
    while int(i)!=0:
        wei=int(i)%10
        s+=pow(wei,3)
        i/=10
    if s==copy:
        if(num!=0):
            print(",",end="")
        print(copy,end="")
        num+=1
