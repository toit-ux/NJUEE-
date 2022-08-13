#### verilog基本操作
##### verilog简介
verilog是一种硬件描述语言，用户在表达自己需求过后，硬件设计人员就要根据需求设计出符合要求的状态机。verilog则是将状态机从图形形式转化为代码的形式，在转化的过程中可能出现一定的偏差，这就需要ic验证人员利用自己搭建或现成的验证平台对代码进行验证。
##### verilog数据类型
###### wire型
可以看为电路中相邻两个点中间取的一个点，该类型的数据用`assign`语句赋值。
###### assign
相当于电路的连线过程，例如`assign c=~a`是将c点与a点间连接一个非门
###### reg
寄存器型。用来储存数据，用该类型数据定义的变脸必须进行赋值操作，而wire型不需要。所以在testbench代码中，输入的数据由于需要赋激励值，所以用reg型，输出不需要直接赋值，所以应该用wire型。

##### verilog的流程控制语句
###### if语句
```verilog
格式为：
always@（*）begin
    if(condition1)
        begin
            ...
        end
    elseif(condition2)
        begin
            ...
        end
    else begin
        ...
        end
    end
```
###### case语句
```verilog
always@（*）begin
    case(sel)
        2'b00:...
        2'b01:...
        2'b10:...
        2'b11:...
    endcase
end
```
###### casez语句
casez语句可以实现“模糊匹配操作”，减少代码量
```verilog
always@（*）begin
    case(sel)
        4'b000z:...   //z可用?代替
        4'b00z0:...
        4'b0z00:...
        4'bz000:...
    endcase
end
```
###### for语句
###### while语句