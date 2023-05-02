txt=open('data.csv','r').readlines()
txt=txt[::-1]
for i in txt:
    i=i.strip('\n')
    l=i.split(',')
    l=l[::-1]
    s=';'.join(l)
    for j in s:
        if j==' ':
            s=s.replace(j,'')
    print(s)
