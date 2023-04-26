#include <bits/stdc++.h>

using namespace std;

class Xe{
    private:
        float QuangDuong;
        float static Xang;
        float static CanNang_HangHoa;
    public:
        Xe();
        float BaoCanNang_HangHoa();
        float LuongXang();
        void DoXang(float doXang);
        void ChatHang(float Hang);
        void BoBotHang(float Hang);
};

class XeMay:public Xe{
    public: 
        XeMay();
        void ChatHang(float Hang);
        void BoBotHang(float Hang);
        void DoXang(float X);
        void XeChay(float S);
        bool Ktra_Xang();
        //float LuongXang_HienTai(float S);
};

class XeTai:public Xe{
    public:
        XeTai();
        void ChatHang(float Hang);
        void BoBotHang(float Hang);
        void DoXang(float X);
        void XeChay(float S);
        bool Ktra_Xang();
        //float LuongXang_HienTai(float S);
};