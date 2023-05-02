import turtle as t
def Koch(size,n):
    if n==1:
        t.fd(40)
    else:
        for angle in [0,60,-120,60]:
            t.left(angle)
            Koch(size/3,n-1)
def main():
    t.setup(600,600,0,0)
    t.penup()
    t.goto(-200,100)
    t.pendown()
    t.pensize(5)
    level=3
    for i in range(3):        
        Koch(400,level)
        t.right(120)
main()
