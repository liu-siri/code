import jieba
txt=open("沉默的羔羊.txt","r",encoding='utf-8').read()
txte=jieba.lcut(txt)
d= {}
for i in  txte:
    if len(i)>=2:
       d[i]=d.get(i,0)+1
items=list(d.items())
items.sort(key=lambda x:x[1],reverse=True)
word,counts=items[0]
print(word)
