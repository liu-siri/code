import turtle as t
import time
def drawGap():
    t.penup()
    t.fd(4)
def drawline(draw):
    drawGap()
    t.pendown() if draw else t.penup()
    t.fd(40)
    drawGap()
    t.right(90)
def drawDigit(digit):
    drawline(True) if digit in ['2','3','4','5','6','8','9'] else drawline(False)
    drawline(True) if digit in ['0','1','3','4','5','6','7','8','9'] else drawline(False)
    drawline(True) if digit in ['0','2','3','5','6','8'] else drawline(False)
    drawline(True) if digit in ['0','2','6','8'] else drawline(False)
    t.left(90)
    drawline(True) if digit in ['0','4','5','6','8','9'] else drawline(False)
    drawline(True) if digit in ['0','2','3','5','7','8','9'] else drawline(False)
    drawline(True) if digit in ['0','1','2','3','4','7','8','9'] else drawline(False)
    t.left(180)
    t.penup()
    t.fd(40)
    t.pendown()
def fontmove():
    t.penup()
    t.fd(120)
    t.pendown()
    t.pencolor(255,128,0)
def drawDate(s):
    for i in s:
        if i =='+':
            t.pencolor(30,144,255)
            t.write("年",font=("Arial",50,"normal"))
            fontmove()
        elif i=='=':
            t.pencolor(30,144,255)
            t.write("月",font=("Arial",50,"normal"))
            fontmove()
        elif i=='-':
            t.pencolor(30,144,255)
            t.write("日",font=("Arial",50,"normal"))
            fontmove()
        else:
            drawDigit(i)
def main():
    t.setup(1200,1200,0,0)
    t.penup()
    t.bk(540)
    t.pendown()
    t.pensize(20)
    t.colormode(255)
    t.pencolor(255,128,0)
    drawDate(time.strftime("%Y+%m=%d-",time.gmtime()))
    t.done()
main()
