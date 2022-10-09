import sys
from untitled import Ui_MainWindow
import untitled
from PyQt5.QtWidgets import QApplication, QMainWindow
import pics_ui_rc  # 导入添加的资源（根据实际情况填写文件名）

global n
class my_func(QMainWindow,Ui_MainWindow):
    n=0
    def fun_link(self):
        self.pushButton.clicked.connect(self.event1)
        self.pushButton_2.clicked.connect(self.event2)
        self.pushButton_3.clicked.connect(self.event3)
        self.pushButton_8.clicked.connect(self.event4)
        self.pushButton_9.clicked.connect(self.event5)
        self.pushButton_7.clicked.connect(self.event6)
        self.pushButton_5.clicked.connect(self.event7)
        self.pushButton_6.clicked.connect(self.event8)
        self.pushButton_4.clicked.connect(self.event9)
        self.pushButton_10.clicked.connect(self.event10)
        self.pushButton_12.clicked.connect(self.event0)
        self.pushButton_11.clicked.connect(self.event11)
        self.pushButton_13.clicked.connect(self.event13)
        self.pushButton_14.clicked.connect(self.event14)
        self.pushButton_16.clicked.connect(self.event16)
        self.pushButton_15.clicked.connect(self.event15)

    # def event(self,num):
    #     global n
    #     n=self.n
    #     def fun():
    #         global n
    #         txt=n.toPlainText()
    #         n.setText(txt+str(n))
    #         n.textBrowser.setText("0")
    #     return fun

    def event1(self):
        if my_func.n==1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"1")
    def event2(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"2")

    def event3(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"3")

    def event4(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"4")

    def event5(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"5")

    def event6(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"6")

    def event7(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"7")

    def event8(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"8")

    def event9(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"9")
    def event10(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"+")
    def event11(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"-")
    def event13(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"/")
    def event14(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        self.textBrowser.clear()
    def event16(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt=self.textBrowser.toPlainText()
        try:
            c=eval(txt)
        except:
            self.textBrowser.setText("error!")
        else:
            self.textBrowser.setText(txt+"=")
            self.textBrowser.append(str(c))
        my_func.n=1
    def event15(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"*")
    def event0(self):
        if my_func.n == 1:
            self.textBrowser.clear()
            my_func.n = 0
        txt = self.textBrowser.toPlainText()
        self.textBrowser.setText(txt+"0")



    def __init__(self, parent=None):
        super(my_func, self).__init__(parent)
        self.setupUi(self)
        self.fun_link() #连接槽函数


app = QApplication(sys.argv)
MainWindow = QMainWindow()
ui = Ui_MainWindow()
ui.setupUi(MainWindow)
my=my_func()
my.show()

sys.exit(app.exec_())
