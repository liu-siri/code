txt=open("latex.log",'r').readlines()
g1=set(txt)
for i in txt:
    if i in g1:
        txt.remove(i)
g2=set(txt)
print("共{}关键行".format(len(g1)-len(g2)))
