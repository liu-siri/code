txt=open("latex.log",'r')
sum=0
line=0
for i in txt:
    i=i.strip("\n")
    if len(i)!=0:
        for j in i:
            if j!=" ":
                sum+=1
        line+=1
avg=sum/line
if (avg-sum//line)>=0.5:
    avg=int(avg)+1
else :
    avg=int(avg)
print(avg)
                
