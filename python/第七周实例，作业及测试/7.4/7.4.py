txt=open("data.csv",'r')
for i in txt:
    i=i.replace('\n','')
    l=i.split(',')
    if len(l[1])>1:
        l[0]=' '+l[0]
    l2=sorted(l,reverse=True)
    if len(l[1])>1:
        l2[0]=str(l2[0]).replace(' ','')
    s2=','.join(l2)
    print(s2)
    
