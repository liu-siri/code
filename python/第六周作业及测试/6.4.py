d=eval(input())
if type(d)!=dict:
    print("输入错误")
else:
    c={}
    for i in d:
        t1=i
        t2=d[i]
        c[t2]=t1
    print(c)
        
