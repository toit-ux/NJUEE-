## 一些git的基本操作

[一个参考网站](https://orangex4.cool/post/github-tutorials-for-beginner/#git-%E5%9F%BA%E7%A1%80%E4%BD%BF%E7%94%A8)

在打开一个文件夹后，如果想要将次文件夹与远程仓库建立链接，你需要

1. git init 初始化本地仓库
2. git clone +url 将远程仓库克隆到本地，同时将连个仓库链接
3. 在本地仓库中进行文件修改
4. gie add . 将修改提交到缓冲区
5. git commit -m "修改信息" 将修改提交到本地仓库的index中
6. git push 提交到远程仓库 
   如果是首次提交需要用命令：git 

## 其他命令
1. git status 查看提交状态
2. git branch 查看分支
3. 撤销上一次提交
   1. git convert HEAD (HEAD^ 撤销上上次提交)
   2. git reset --hard HEAD