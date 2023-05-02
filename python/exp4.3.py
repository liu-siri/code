import time
scale=50
print("link start".center(scale//2,"-"))
start=time.perf_counter()
for i in range (scale+1):
    a='*'*i
    b='.'*(scale-i)
    dur=time.perf_counter()-start
    print("\r{:^3.0f}%[{}->{}]{:.2f}s".format(i,a,b,dur),end="")
    time.sleep(0.1)
print("\n"+"back to earth".center(scale//2,'-'))
