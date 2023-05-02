from random import random

def printItro():
    print("这是一个模拟体育竞技的的程序")
    print("请输入A,B选手的能力值（0-1之间）:")

def getablity():
    proA = eval(input("请输入A选手的能力值："))
    proB = eval(input("请输入B选手的能力值："))
    n = eval(input("请输入模拟的场次数："))
    return proA,proB,n

def gameOver(scoreA,scoreB):
    return scoreA==15 or scoreB==15

def simOnegame(proA,proB):
    scoreA = 0
    scoreB = 0
    server = 'A'
    while not gameOver(scoreA,scoreB):
        if server == 'A':
             if random()>proA:
                 server = 'B'
             else :
                 scoreA+=1
        if server == 'B':
             if random()>proB:
                 server = 'A'
             else :
                 scoreB+=1
    return 1 if scoreA>scoreB else -1

def simNgame(proA,proB,n):
    winA = 0
    winB = 0
    time = 0
    while time < n:
        if simOnegame(proA,proB)>0:
            winA+=1
        else:
            winB+=1
        time+=1
    return winA,winB

def printer(winA,winB,n):
    print("共模拟{}场比赛".format(n))
    print("A胜利的场次是{},胜率是{:.2%}".format(winA,winA/n))
    print("B胜利的场次是{},胜率是{:.2%}".format(winB,winB/n))

def main():
    printItro()
    proA,proB,n = getablity()
    winA,winB = simNgame(proA,proB,n)
    printer(winA,winB,n)

main()
