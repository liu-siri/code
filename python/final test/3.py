d=eval(input())
newd={}
if type(d)==dict:
    for i in d:
        newd[d[i]]=i
    print(newd)
else:
    print("输入错误")
