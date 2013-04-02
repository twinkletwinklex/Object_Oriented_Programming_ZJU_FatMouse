### 输入格式
共N行，表示有N位学生，每位学生占一行，可包含任意课程数量
对于某行数据，例如：
学号 姓名 课程1 分数1 课程2 分数2
回车表示结束了这个学生的输入
所有学生输入完成后，回车然后以EOF结尾。

### 输出格式

另外，助教GG，这个输入输出格式在上次提交时候注释在了main.cpp 的开头的。

### sample input:

 1 richard aaa 3 bbb 4

 2 rrrr aaa 5 bbb 4 ccc 5

 3 kkk aaa 2 ddd 2

### sample output:
num name    aaa     bbb     ccc     ddd     AVG

 1   richard 3       4                       3.5

 2   rrrr    5       4       5               4.66667

 3   kkk     2                       2       2

    MIN:    2       4       5       2

    MAX:    5       4       5       2

    AVG     3.33333 4       5       2


