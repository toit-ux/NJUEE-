
[toc]
# 如何在vscode中配置c语言环境

#### 下载mingw64
其中含有c/c++代码编译和调试的库函数
[下载链接](https://gytx.lanzouy.com/iW32909witba)


####配置环境变量
1. 确保代码所在的路径中不含有中文；
2. 编辑launch.jason
   ```json
    {
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            //此处是编译器路径，以后可直接在此修改
            "compilerPath": "F:/my_create/dev_cpp/mingw64",
            "cStandard": "c11",
            "cppStandard": "c++17",
            "intelliSenseMode": "gcc-x64"
        }
    ],
    "version": 4
    }
   ```
3. 编辑task.json
   ```json
    {
        "version": "2.0.0",
        "tasks": [
        {
            "type": "shell",
            "label": "g++.exe build active file",
            "command": "D:/mingw-w64/x86_64-8.1.0-win32-seh-rt_v6-rev0/mingw64/bin/g++.exe",
            "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "D:/mingw-w64/x86_64-8.1.0-win32-seh-rt_v6-rev0/mingw64/bin"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": "build"
        },
        {
            "type": "cppbuild",
            "label": "C/C++: gcc.exe 生成活动文件",
            "command": "F:\\my_create\\dev_cpp\\mingw64\\bin\\gcc.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "调试器生成的任务。"
        }
    ]
    }
    ```

#### 简便方法(直接到这部即可)
[一个配置vscode c语言的程序](https://www.notion.so/software-a0ee9f904d034af2bceb7fdae1779b4d)

4. 经测试可以实现正常编译与单步调试功能
   
   ![](images/2022-05-28-11-12-11.png)
   ![](images/2022-05-28-11-12-35.png)

# 新的问题
将上面的代码复制到其他文件夹就不可用？
- 原因猜想：次代码是后来做过修改的，而成功案例第一次并不是使用此代码。所以成功案例可能默认使用了第一次成功的代码，而修改后的代码可能就是不正确的。
- 解决方法：将代码改回原来代码试一下。
- 结论：更改过后程序可以正常运行，新建的代码亦可以正常运行，证明上述猜想正确。