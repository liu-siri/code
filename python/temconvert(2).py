Python 3.11.1 (tags/v3.11.1:a7a450f, Dec  6 2022, 19:58:39) [MSC v.1934 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
 tem=input()
if tem[0] in ['C']:
    F=eval(tem[0:-1])*1.8+32
    print("F{:.2f}".format(F))
 elif tem[0] in ['F']:
     C=(eval(tem[0:-1])-32)/1.8
     print("C{:.2f}".format(C))
