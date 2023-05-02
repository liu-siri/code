li=open("latex.log",'r').readlines()
sum=0
d={}
for i in li:
    d[i]=d.get(i,0)+1
for i in d:
    if d[i]==1:
        sum+=1
print("共{}独特行".format(sum))
