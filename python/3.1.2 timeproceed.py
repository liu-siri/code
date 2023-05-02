import time as ti
start=ti.perf_counter()
rate=50
for i in range(rate+1):
    a='*'*i
    b='.'*(rate-i)
    dur=ti.perf_counter()-start
    print("\r{:3^}%[{}->{}]{:.3f}s".format(i,a,b,dur),end="")
    ti.sleep(1)
