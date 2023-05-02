li=[]
for i in range(10):
    li.append(chr(ord('0')+i))
li.append("+")
li.append("j")
li.append('.')
s=input()
flag=1
for i in s:
    if i not in li:
        flag=0
    if i=='+' and s[-1]!='j':
        flag=0
if flag==0:
    print("输入有误")
else:
    print(eval(s)**2)
