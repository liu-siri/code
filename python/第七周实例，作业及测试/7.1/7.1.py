f=open("latex.log",'r')
txt=f.read()
counts=0
for i in txt:
    if i=='\n':
        counts+=1
s='''txt=''.join(txt.split())
f.close()
f=open("try.txt",'w')
f.write(txt)
f.close()
f=open('try.txt','r').read()'''
print("共{}行".format(counts))
    
