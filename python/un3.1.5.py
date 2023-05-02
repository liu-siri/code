num=0;flag=0
name='Kate'
code='666666'
for num in range(3):
    input_s=input()
    in_code=input()
    if input_s==name and in_code==code:
        flag=1
        break
if flag:
    print("登录成功！")
else:
    print("3次用户名或者密码均有误！退出程序。")
