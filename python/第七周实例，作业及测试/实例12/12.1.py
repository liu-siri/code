import jieba
import wordcloud
from scipy.misc import imread
mask=imread("fivestar.jpg")
f=open("二十大.txt",'r',encoding='utf-8')
t=f.read()
f.close()
txt=' '.join(jieba.lcut(t))
w=wordcloud.WordCloud(txt)
w.generate(width=1000,height=700,font='msyh.ttc',mask=mask,background_color='white',max_words=20)
w.to_file("二十大报告词云展示.png")
