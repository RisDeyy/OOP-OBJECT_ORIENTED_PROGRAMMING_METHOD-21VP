#include <bits/stdc++.h>

using namespace std;

class Ticket{
    protected:
        string film_Title;
        string start_Time;
        string room_Name;
        int FoodandDrink_Price;
        float ticket_Factor;
    public:
        Ticket();
        Ticket(string title, string time, string room, int price, float factor);
        Ticket(const Ticket& ticket);
        virtual void Input();
        virtual void Output();
        virtual string toString();
        virtual int price() = 0;
        virtual string get_TicketType() = 0;
        string get_startTime();
        int get_rangeofTime();
        ~Ticket();
};

class RegularTicket:public Ticket{
    public:
    RegularTicket();
    RegularTicket(string title, string time, string room, int price, float factor);
    RegularTicket(const RegularTicket& rt);
    void Input();
    void Output();
    string toString();
    int price();
    int get_Price();
    string get_TicketType();
    ~RegularTicket();
};

class ComboTicket:public Ticket{
    public:
    ComboTicket();
    ComboTicket(string title, string time, string room, int price,  float factor);
    ComboTicket(const ComboTicket& rt);
    void Input();
    void Output();
    string toString();
    int price();
    int get_Price();
    string get_TicketType();
    ~ComboTicket();
};

class Cinema{
    private:
        vector <Ticket*> ticket;
    public:
        void Input_ListofTickets();
        void OutPut_ListofTickets();
        void sort_ListofTickets();
        void save_toFile(char* filename);
        void  listof_tickets_24time_rangesof_Day();
};