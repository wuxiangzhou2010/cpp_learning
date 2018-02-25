## C++远征之继承篇

#### 继承的方式
- pubic继承
在子类中的访问与父类中无异
public      --> public
protected   --> protected
private     --> 不可访问
- 保护继承
public      --> protected
protected   --> protected
private     --> 不可访问
- 私有继承
public      --> private
protected   --> private
private     --> 不可访问


#### 构造函数执行的顺序
    1. 调用基类构造函数，调用顺序按照它们被继承时声明的顺序（从左到右）；
    2. 调用内嵌成员对象的构造函数，调用顺序按照它们在类中声明的顺序；
    3. 派生类的构造函数体中的内容。

多继承

多重继承

虚继承