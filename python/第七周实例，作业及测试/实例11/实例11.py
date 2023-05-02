import turtle as t
t.setup(800,1000,0,0)
t.pencolor('red')
t.pensize(5)

data=[]
txt=open("data.txt",'r')
for line in txt:
    line=line.replace('\n','')
    data.append(list(map(eval,line.split(','))))
txt.close()


for i in range(len(data)):
    t.pencolor(data[i][3],data[i][4],data[i][5])
    t.fd(data[i][0])
    if data[i][1]:
        t.right(data[i][2])
    else:
        t.left(data[i][2])
    if data[i][6]:
        t.goto(0,0)
