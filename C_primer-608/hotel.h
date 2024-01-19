/* hotel1.h -- 符号常量和 hotel.c 中所有函数的原型 */
#define  QUIT       5
#define  HOTEL1     180.00
#define  HOTEL2     225.00
#define  HOTEL3     255.00
#define  HOTEL4     355.00  
#define  DISCOUNT   0.95
#define  STARS      "**********************************"


// 显示选择列表
int menu(void);
// 返回预订天数
int getnights(void);
//显示函数
void showprice(double rate, int nights);

