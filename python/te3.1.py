for i in range (1000,10000):
    s=0;copy=i
    while int(copy)!=0:
        s+=int((copy%10))**4
        copy/=10
    if s==i:
        print(s)
