txt=open('latex.log','r').read()
d={}
sum=0
for i in txt:
    if i in ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']:
        d[i]=d.get(i,0)+1
    sum+=1
items=list(d.items())
items.sort(key=lambda x:x[0])
s=str(dict(items))
for i in s:
    if i==' ' or i=="'":
        s=s.replace(i,'')
print("共{}字符,{}".format(sum,s[1:-1]))
