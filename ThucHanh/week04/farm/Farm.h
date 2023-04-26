#include <bits/stdc++.h>
using namespace std;

class DairyCow{
    private:
        static int ID;
        float weight;
        float age;
    public:
        DairyCow();
        DairyCow(float w, float a);
        DairyCow(const DairyCow& cow);
        void Input();
        int GetID();
        float GetWeight();
        float GetAge();
        void Set_weight(float w);
        void Set_age(float a);
        static void Set_ID(int id);
        ~DairyCow();
        string toString();
        DairyCow operator=(const DairyCow& cow);
        bool Check();
};

class Goat{
     private:
        static int ID;
        float weight;
        float age;
    public:
        Goat();
        Goat(float w, float a);
        Goat(const Goat& g);
        void Input();
        int GetID();
        float GetWeight();
        float GetAge();
        void Set_weight(float w);
        void Set_age(float a);
        static void Set_ID(int id);
        ~Goat();
        string toString();
        Goat operator=(const Goat& g);
        bool Check();
};

class ABCFarm{
    private:
        vector<DairyCow>cow;
        vector<Goat>goat;
    public:
        void Input();
        void Output();
        void OutputByAge(int min, int max);
};