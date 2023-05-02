import jieba
import wordcloud
import imageio
mask=imageio.imread("by.jpg")
f=open("二十大.txt",'r',encoding='utf-8')
t=f.read()
f.close()
txt=' '.join(jieba.lcut(t))
w=wordcloud.WordCloud(width=1000,height=700,font_path='msyh.ttc',mask=mask,background_color='white',max_words=20)
w.generate(txt)
w.to_file("二十大报告词云展示(4).png")
