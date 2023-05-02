import os
txt=open("libs.txt").read()
libs=txt.split(',')
print(libs)
try:
    for lib in libs:
        os.system("pip install "+lib)
    print("success")
except:
    print("failure")
