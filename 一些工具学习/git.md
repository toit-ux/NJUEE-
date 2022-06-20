## 一些git的基本操作

[一个参考网站](https://orangex4.cool/post/github-tutorials-for-beginner/#git-%E5%9F%BA%E7%A1%80%E4%BD%BF%E7%94%A8)

在打开一个文件夹后，如果想要将次文件夹与远程仓库建立链接，你需要
## 自上而下的连接方式
如果远程有内容，将远程仓库中的内容克隆到本地实现本地与远程的连接
1. git init 初始化本地仓库
2. git remote add origin https://gitee.com/NJUEE/njuee.git 将远端仓库链接到本地仓库
3. git clone +url 将远程仓库克隆到本地
4. 在本地仓库中进行文件修改
5. gie add . 将修改提交到缓冲区
6. git commit -m "修改信息" 将修改提交到本地仓库的index中
7. git push 提交到远程仓库 (首次push: git push --set-upstream origin master)


## 其他命令
1. git status 查看提交状态
2. git branch 查看分支
3. 撤销上一次提交
   1. git revert HEAD (HEAD^ 撤销上上次提交)
   2. git reset --hard HEAD