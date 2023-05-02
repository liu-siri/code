import turtle as t
import time as ti
def Gap():
    t.penup()
    t.fd(4)
def linePrint(judger):
    t.penup()
    t.pendown() if judger else t.penup()
    t.fd(40)
    Gap()
    t.right(90)
def digitJudge(digit):
    linePrint(True) if (digit in ['2','3','4','5','6','8','9']) else linePrint(False)
    linePrint(True) if (digit in ['0','1','3','4','5','6','7','8','9']) else linePrint(False)
    linePrint(True) if (digit in ['0','2','3','5','6','8']) else linePrint(False)
    linePrint(True) if (digit in ['0','2','6','8']) else linePrint(False)
    t.left(90)
    linePrint(True) if (digit in ['0','4','5','6','8','9']) else linePrint(False)
    linePrint(True) if (digit in ['0','2','3','5','6','7','8','9']) else linePrint(False)
    linePrint(True) if (digit in ['0','1','2','3','4','7','8','9']) else linePrint(False)
    t.left(180)
    t.penup()
    t.fd(40)
    t.pendown()
def Sdigit(s):
    for i in s:
        if i == '+':
            t.write("年",font=("Arial",18,"normal"))
            t.penup()
            t.fd(80)
            t.pendown()
        elif i == '=':
            t.write("月",font=("Arial",18,"normal"))
            t.penup()
            t.fd(80)
            t.pendown()
        elif i == '-':
            t.write("日",font=("Arial",18,"normal"))
            t.penup()
            t.fd(80)
            t.pendown()
        else:
            print(i)
            digitJudge(i)
def main():
    t.setup(1200,650,0,0)
    t.penup()
    t.bk(450)
    t.pendown()
    t.pensize(5)
    t.pencolor("purple")
    Sdigit(ti.strftime("%Y+%m=%d-",ti.gmtime()))
    t.done()
main()
