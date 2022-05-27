[TOC]
# css自学文档
[参考链接](https://www.runoob.com/css3/css3-mediaqueries-ex.html)
## css简介
css是通过类来指定原有的结构体的属性值的工具。
例如：
1. 修改特定类字体的颜色
   ```css
   <style>
        body{color:red;}  //修改body类文字颜色
        h1{color:blue;}  //修改一级标题字体颜色
        h2{color:black;}
        p.s{color:green;}
    </style>
   ```
2. 设置表格样式
   ```css
    table,th,td    //th为表头，td为内容行
    {
      border:1px solid orange;
    }
    th{                         //修改table元素属性               
      background-color: green;
      color:white;
    }

   ```

## css特殊功能
1. 制作导航栏
2. 制作下拉菜单
3. 制作播放器
4. 绘制图形？？