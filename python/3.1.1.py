def cal(rate):
    ans=1.0
    for i in range(365):
        if i%7 in [6,0]:
            ans*=(1-0.01)
        else:
            ans*=(1+rate)
    return ans

rate=0.010
while(cal(rate)<=37.78):
    rate+=0.001
print("工作日的努力参数是: {:.3f}".format(rate))

            
