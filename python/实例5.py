w,h=eval(input("请用逗号分隔(体重单位是公斤，身高单位是米):"))
bmi=w/(h**2)
if bmi<18.5:
    WOR="偏瘦"
    CH="偏瘦"
elif bmi>=18.5 and bmi<=24:
    WOR="正常"
    CH="正常"
elif bmi>24 and bmi<=25:
    WOR="正常"
    CH="偏胖"
elif bmi>25 and bmi<=28:
    WOR="偏胖"
    CH="偏胖"
elif bmi>28 and bmi<=30:
    WOR="偏胖"
    CH="肥胖"
else:
    WOR="肥胖"
    CH="肥胖"
print("国际标准是：{}，国内标准是{}".format(WOR,CH))
