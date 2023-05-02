h,w=eval(input(""))
bmi=w/h**2
s1='偏瘦'
s2='正常'
s3='偏胖'
s4='肥胖' 
print("BMI数值为:{}".format(bmi))
if bmi<18.5:
    print("BMI指标为:国际{},国内{}".format(s1,s1))
elif 18.5<=bmi<24:
    print("BMI指标为:国际{},国内{}".format(s2,s2))
elif 24<=bmi<25:
    print("BMI指标为:国际{},国内{}".format(s2,s3))
elif 25<=bmi<28:
    print("BMI指标为:国际{},国内{}".format(s3,s3))
elif 28<=bmi<30:
    print("BMI指标为:国际{},国内{}".format(s3,s4))
elif bmi>=30:
    print("BMI指标为:国际{},国内{}".format(s4,s4))
