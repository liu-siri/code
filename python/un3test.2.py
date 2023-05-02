s=0
for i in range(2,101):
    flag=1
    for j in range(2,i):
        if i%j==0:
            flag=0
    if flag==1:
        s+=i
    elif i==3:
        s+=3
print(s)
