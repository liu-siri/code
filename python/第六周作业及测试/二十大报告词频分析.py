import jieba as j
txt = open("二十大报告.txt","r",encoding='utf-8').read()
txt=j.lcut(txt)
d={}
for i in txt:
    if len(i)>1:
        d[i]=d.get(i,0)+1
items=list(d.items())
items.sort(key=lambda x:x[1],reverse=True)
for i in range(20):
    word,counter=items[i]
    print("word : {}  counter : {}".format(word,counter))
