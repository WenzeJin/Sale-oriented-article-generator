#include<iostream>

using namespace std;

int main()
{
    string article;
    string main;
    string ex1;
    string ex2;
    int repeat = 1;
    cout << "Ӫ��������������" << endl;
    cout << "Copyright 2020 Wenze Jin" << endl;
    while(repeat != 0)
    {
        article = "";
        cout << "�����������������������" << endl;
        cin >> main;
        cout << "������������������¼�" << endl;
        cin >> ex1;
        cout << "��˵�����¼�����һ�ֽ��ͻ�ԭ��" << endl;
        cin >> ex2;
        cout << endl;
        cout << endl;
        cout << endl;

        article = article + main + ex1 + "����ô�����أ�" 
                + main +"���Ŵ�Ҷ�����Ϥ������" + main + ex1 + "����ô�����أ�"
                +"���գ���һλ���С�羪��ط���" + main + ex1 + ",�������С��һ�������˽�һ�°ɡ�";
        cout << article << endl;
        article = "";
        article = main + ex1 + "��ʵ����" + ex2 + "," 
                + "��ҿ��ܻ�ܾ���" + main + "��ô��" + ex1 +"�أ�����ʵ����������С��Ҳ�е��ǳ����ȡ�";
        cout << article << endl;
        article = "";
        article = "����ǹ���" + main + ex1 + "�������ˣ������ʲô�뷨�أ���ӭ������������С��һ������Ŷ��";
        cout << article << endl;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << "����������1���˳�������0" << endl;
        cin >> repeat;
    }
    return 0;
}