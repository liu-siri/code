N=int(eval(input()))
i=1
while(i<=N):
    #num=int((N+1)/2-(i+1)/2)
    #s1=' '*num
    s2='*'*i
    #print(s1,end="")
    print("{:^{}}".format(s2,N))
    i+=2
