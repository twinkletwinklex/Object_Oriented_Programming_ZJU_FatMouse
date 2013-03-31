/*
Richard

sample input:
1 richard aaa 3 bbb 4
2 rrrr aaa 5 bbb 4 ccc 5
3 kkk aaa 2 ddd 2

sample output:
num name    aaa     bbb     ccc     ddd     AVG
1   richard 3       4                       3.5
2   rrrr    5       4       5               4.66667
3   kkk     2                       2       2
    MIN:    2       4       5       2
    MAX:    5       4       5       2
    AVG     3.33333 4       5       2
*/

#include "classes.h"
#include "student.h"
#include "course.h"
#include <cstdlib>
using namespace std;

int main()
{
	Classes c;
	c.make();
	c.list_course();
	c.list_stu();
	c.list_analytics();
	return 0;
}
