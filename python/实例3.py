def cal(du):
    ans=1
    for i in range(365):
        if i%5 in [3,4]:
            ans=ans*(1-0.01)
        else:
            ans=ans*(1+du)
    return ans
dayfactor=0.01
while cal(dayfactor)<37.78:
    dayfactor+=0.001
print("所需的努力值是：{:.4f}".format(dayfactor))
    
