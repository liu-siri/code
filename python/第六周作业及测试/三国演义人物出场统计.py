import jieba as j
txt = open("threekingdom.txt","r",encoding='utf-8').read()
txt=j.lcut(txt)
exclude=['将军','却说',"二人","不可","荆州","不能","如此","商议","如何",'东吴','今日','于是','天下','引兵',"主公","军士",'左右','丞相','军马','次日','大喜']
d={}
for i in txt:
    if i in ['刘备','刘玄德','玄德','玄德曰']:
        d['刘备']=d.get('刘备',0)+1
    elif i in ['关羽','关云长','关二爷','云长','关公']:
        d['关羽']=d.get('关羽',0)+1
    elif i in ['张翼德','张飞']:
        d['张飞']=d.get('张飞',0)+1
    elif i in ['孔明','诸葛亮','孔明曰']:
        d['诸葛亮']=d.get('诸葛亮',0)+1
    elif i in ['曹操','曹孟德','孟德','阿满','曹阿满']:
        d['曹操']=d.get('曹操',0)+1
    elif len(i)>1:
        d[i]=d.get(i,0)+1
for i in exclude:
    del d[i]
items=list(d.items())
items.sort(key=lambda x:x[1],reverse=True)
for i in range(20):
    word,counter=items[i]
    print("word : {}  counter : {}".format(word,counter))
