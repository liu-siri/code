#请在...处补充代码
with open('hamlet.txt','r',encoding='uft-8') as f:
   print(f.read())
def getText():
    txt = open("hamlet.txt", "r").read()
    txt=txt.lower()
    s="!#$%&()*+,-./:;<=>?@[\]^_‘{|}~"
    for i in txt:
        if i in s:
            txt=txt.replace(i," ")
    item=txt.split()
    d={}
    for i in item:
        d[i]=d.get(i,0)+1
    return d
    
d=getText()
items = list(d.items())
items.sort(key=lambda x:x[1],reverse=True)
for i in range(10):
    word,count=items[i]
    print(word)
