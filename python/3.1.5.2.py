s=input()
l=len(s)
s=list(s)
for i in range(l):
    if s[i] in ['x']:
        s[i]='a'
    elif s[i] in ['X']:
        s[i]='A'
    elif s[i] in ['y']:
        s[i]='b'
    elif s[i] in ['Y']:
        s[i]='B'
    elif s[i] in ['z']:
        s[i]='c'
    elif s[i] in ['Z']:
        s[i]='C'
    elif s[i] in [' ']:
        s[i]=' '
    elif s[i]>='a' and s[i]<='w':
        s[i]=chr(ord(s[i])+3)
    elif s[i]>='A' and s[i]<='W':
        s[i]=chr(ord(s[i])+3)
string=""
print(string.join(s))
