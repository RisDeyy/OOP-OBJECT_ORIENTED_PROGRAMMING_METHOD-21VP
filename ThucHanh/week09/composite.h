#include <bits/stdc++.h>
using namespace std;

class CItem {
    protected:
        string name;
        int size;
        bool readOnly_Attribute;
        bool hidden_Attribute;
    public:
        CItem(string _name, int _size, bool readOnly, bool hidden);
        string getName();
        int getSize();
        bool isReadOnly();
        bool isHidden();
        void setHidden(bool isHidden, bool isAlsoApplyToChildren);
        virtual void print(bool isPrint_hiddenItems) = 0;
};

class CFile : public CItem {
    public:
        CFile(string _name, int _size);
        void print(bool isPrint_hiddenItems);
};

class Composite : public CItem {
    protected:
        vector<CItem*> items;
    public:
        Composite(string _name);
        ~Composite();
        void add(CItem* item);
        CItem* removeByName(string _name);
        CItem* findByName(string _name);
        void print(bool isPrint_hiddenItems);
};

class CFolder : public Composite {
    public:
        CFolder(string _name);
};

//bài code chưa hoàn thiện lắm :)))))