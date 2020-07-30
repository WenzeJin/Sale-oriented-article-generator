#include<iostream>

using namespace std;

int main()
{
    string article;
    string main;
    string ex1;
    string ex2;
    int repeat = 1;
    cout << "营销号文章生成器" << endl;
    cout << "Copyright 2020 Wenze Jin" << endl;
    while(repeat != 0)
    {
        article = "";
        cout << "请输入文章描述的主体对象" << endl;
        cin >> main;
        cout << "请输入主题对象发生的事件" << endl;
        cin >> ex1;
        cout << "请说明对事件的另一种解释或原因" << endl;
        cin >> ex2;
        cout << endl;
        cout << endl;
        cout << endl;

        article = article + main + ex1 + "是怎么回事呢？" 
                + main +"相信大家都很熟悉，但是" + main + ex1 + "是怎么回事呢？"
                +"近日，有一位外国小哥惊奇地发现" + main + ex1 + ",下面就让小编一起带大家了解一下吧。";
        cout << article << endl;
        article = "";
        article = main + ex1 + "其实就是" + ex2 + "," 
                + "大家可能会很惊讶" + main + "怎么会" + ex1 +"呢？但事实就是这样，小编也感到非常惊讶。";
        cout << article << endl;
        article = "";
        article = "这就是关于" + main + ex1 + "的事情了，大家有什么想法呢，欢迎在评论区告诉小编一起讨论哦！";
        cout << article << endl;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << "继续请输入1，退出请输入0" << endl;
        cin >> repeat;
    }
    return 0;
}