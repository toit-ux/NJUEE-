[TOC]
## 如何使用vscode写笔记？

#### 参考资料

 [基本元素（公式、流程图、图片）编辑方式文档](https://shd101wyy.github.io/markdown-preview-enhanced/#/zh-cn/diagrams?id=flow-charts)

 [一个非常有用的教学文档](https://orangex4.cool/post/notes-in-markdown/#%E4%BF%AE%E6%94%B9%E9%A2%84%E8%A7%88%E7%AA%97%E5%8F%A3%E8%83%8C%E6%99%AF-%E9%80%89%E5%81%9A)
 
 [latex常用符号](https://blog.csdn.net/ViatorSun/article/details/82826664?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522162306595616780261931583%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=162306595616780261931583&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-1-82826664.pc_search_result_before_js&utm_term=latex&spm=1018.2226.3001.4187)
 
 [latex箭头](https://blog.csdn.net/Artoria_QZH/article/details/103310704)

 [绘图软件](https://zhuanlan.zhihu.com/p/496086808)

---
#### 基本操作
 1. 插入公式: $x^2+y^2=1$
 2. 修改字体类型和颜色
   ```markdown
  <font face="逐浪新宋" color=red size=3>我是逐浪新宋</font>  //特点是可以更改大小
  <font style="color:white;background:red;">背景</font> //特点是可以高亮
   ```
   example: 
    - <font face="楷体" color=red size=4>我是红色楷体</font>
    - <font style="face:'楷体'；color:white;background:red;">背景</font>

 3. 插入图片（可以粘贴截图：ctr+alt+v)
 4. 插入表格
   
  |项目1|项目2|
  |-|-|
  |奖学金|诺贝尔奖|

 5. 流程图等各种图
   ```mermaid
   graph LR
   A-->B
   B-->c
   c-->A
   ```
 6. 用@import导入外部文件
      @import "1.png"
1. 可以在编写过程中运行代码，画出一些图形
---


#### 绘图
#### 思维导图 

目前xmind首选，虽然界面比不上从前，但操作上未目前最舒适的软件

##### 流程图
流程图可以使用语雀更加快捷，用代码实现可以才考mermaid文档

##### 逻辑图
参考mermaid文档，同时 ==语雀== 也可以实现该功能

##### 几何图形
1. [draw.io](https://app.diagrams.net/)
用来绘制一些比较基本的图形，另外有较为完整的电路原件图；还可以用来画流程图

2. [mathcha](https://www.mathcha.io/editor)
绘制二维、三维的函数图形和基本图形；绘制三维图形的能力甚至强与geogebra
更适合 ==三维==

效果如下：

![](images/2022-06-05-22-19-53.png)

![](images/2022-06-05-22-20-38.png)

3. [geogebra](https://www.geogebra.org/)

更适合进行二维绘图，可以对多项式进行特殊点分析，进而因式分解。更适合 ==二维==





[mermaid支持的绘图类型代码介绍](https://mermaid-js.github.io/mermaid/#/)
## 类图


```mermaid
classDiagram 
  Class01 <|-- AveryLongClass : Cool
  class03-- class04
  class05--o class06
  class07..class08
  class09-->class02 : where am I?
  class09-->class03
  class08 <-->class04: hello!
  class07: equals()
  class07: object
  Class01: int true
  Class01: equals()
  
```

#### 制作PPT
优点：
1. 可以插入函数图形、公式、流程图等
2. 无需考虑排版问题
缺点：
1. 需要时间学习；
2. 只能在浏览器中展示
   

与powerpoint对比，大多数情况下它的实用性更低，所以制作ppt使用powerpoint

---

# 使用小技巧
1. 输入空格：
  ```c
  &ensp;：输入一个空格
  &nbsp;：输入一个空格
  &emsp;：输入两个空格
  ```
  example:空 &ensp; 格

2. 修改特定格式的样式
   1. `ctrl shift p`搜索MPE(自定义样式)，进入style.less修改
   2. 例图：

    ![](images/2022-06-01-20-02-13.png)


# 用vscode写作业遇到的问题
1. 用浏览器导出pdf时，代码不能完整保留；
2. 更改字体的颜色和高亮很不方便；