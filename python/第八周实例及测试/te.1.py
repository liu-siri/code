alph=[]
for i in range(26):
    alph.append(chr(ord('a')+i))
s=input()
ans=''
for i in s:
    if i in alph:
        ans+=i
print(ans)
