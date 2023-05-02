# 请在...补充一行或多行代码

def cmul(a,*b):
    ans=a
    for i in b:
        ans*=i
    return ans
            

print(eval("cmul({})".format(input())))
