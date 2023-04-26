#include "cinema.h"

using namespace std;

Ticket::Ticket(){
    film_Title = "";
    start_Time = "";
    room_Name = "";
    FoodandDrink_Price = 0;
    ticket_Factor = 0;
}

Ticket::Ticket(string title, string time, string room, int price, float factor){
    film_Title = title;
    start_Time = time;
    room_Name = room;
    FoodandDrink_Price = price;
    ticket_Factor = factor;
}

Ticket::Ticket(const Ticket& ticket){
    film_Title = ticket.film_Title;
    start_Time = ticket.start_Time;
    room_Name = ticket.room_Name;
    FoodandDrink_Price = ticket.FoodandDrink_Price;
    ticket_Factor = ticket.ticket_Factor;
}

Ticket::~Ticket(){
    film_Title.erase();
    film_Title.empty();
    start_Time.erase();
    start_Time.empty();
    room_Name.erase();
    room_Name.empty();
}

void Ticket::Input(){
    cin.ignore();
    cout << "\nEnter film title: ";
    getline(cin, film_Title);
    cout << "Enter start time (hh:mm): ";
    getline(cin, start_Time);
    cout << "Enter room name: ";
    getline(cin, room_Name);
    cout << "Enter price of food and drink: ";
    cin >> FoodandDrink_Price;
    cout << "Enter ticket factor: ";
    cin >> ticket_Factor;
}

void Ticket::Output(){
    cout << "\nFilm title: " << film_Title;
    cout << "\nStart time: " << start_Time;
    cout << "\nRoom name: " << room_Name;
    cout << "\nPrice of food and drink: " << FoodandDrink_Price << " vnd";
    cout << "\nTicket factor: " << ticket_Factor;
    cout << "\nPrice: " << price() << " vnd";
    cout << get_TicketType();

}

string Ticket::toString(){
    string str1, str2, str3, str4, str5, str6, str7, str8;
    str1 = "\nFilm title: " + film_Title;
    str2 = "\nStart time: " + start_Time;
    str3 = "\nRoom name: " + room_Name;
    str4 = "\nPrice of food and drink: " + to_string(FoodandDrink_Price) + " vnd";
    str5 = "\nTicket factor: " + to_string(ticket_Factor);
    str6 = "\nPrice: " + to_string(price()) + " vnd";
    str7 = get_TicketType();

    string t1, t2, t3, t4, t5, t6;
    t1 = str1.append(str2);
    t2 = t1.append(str3);
    t3 = t2.append(str4);
    t4 = t3.append(str5);
    t5 = t4.append(str6);
    t6 = t5.append(str7);

    return t6;
}

string Ticket::get_startTime(){
    return start_Time;
}

int Ticket::get_rangeofTime(){
    //chuyển string sang int
    int hour1 = get_startTime().at(0) - 48;
    int hour2 = get_startTime().at(1) - 48;
    return hour1*10 + hour2;
}

RegularTicket::RegularTicket():Ticket(){

}

RegularTicket::RegularTicket(string title, string time, string room, int price, float factor):Ticket(title, time, room, price, factor){

}

RegularTicket::RegularTicket(const RegularTicket& rt): Ticket(rt){

}

void RegularTicket::Input(){
    // Ticket *t = new RegularTicket;
    // t -> Input();
    Ticket::Input();
}

void RegularTicket::Output(){
    // Ticket *t = new RegularTicket;
    // t -> Output();
    Ticket::Output();
}

string RegularTicket::toString(){
    Ticket::toString();
}

string RegularTicket::get_TicketType(){
    return "\nTicket type: Regular.";
}

int RegularTicket::get_Price(){
    return price();
}

int RegularTicket::price(){
    return (ticket_Factor*80000 + FoodandDrink_Price); 
}

RegularTicket::~RegularTicket(){

}

ComboTicket::ComboTicket():Ticket(){

}

ComboTicket::ComboTicket(string title, string time, string room, int price, float factor):Ticket(title, time, room, price, factor){

}

ComboTicket::ComboTicket(const ComboTicket& ct): Ticket(ct){

}

void ComboTicket::Input(){
    // Ticket *t = new ComboTicket;
    // t -> Input();
    Ticket::Input();
}

void ComboTicket::Output(){
    // Ticket *t = new ComboTicket;
    // t -> Output();
    Ticket::Output();
}

string ComboTicket::toString(){
    Ticket::toString();
}

string ComboTicket::get_TicketType(){
    return "\nTicket type: Combo.";
}

int ComboTicket::get_Price(){
    return price();
}

int ComboTicket::price(){
    return (ticket_Factor*80000 + (FoodandDrink_Price - FoodandDrink_Price*0.2)); 
}

ComboTicket::~ComboTicket(){

}

void Cinema::Input_ListofTickets(){
    int n;
    cout << "\nEnter number of tickets: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "\nDo you want to choose regular or combo ticket?";
        cout << "\n\t1. Regular ticket.";
        cout << "\n\t2. Combo ticket.";
        int choice;
        cout << "\nYour choice? ";
        cin >> choice;
        switch (choice)
        {
        case 1:{
            cout << "\nEnter information of regular ticket (ticket " << i+1 << ") : ";
            Ticket *t = new RegularTicket;
            t -> Input();
            ticket.push_back(t);
            break;
        }

        case 2:{
            cout << "\nEnter information of combo ticket (ticket " << i+1 << ") : ";
            Ticket *t = new ComboTicket;
            t -> Input();
            ticket.push_back(t);
        }
           
        default:
            break;
        }
    }
}

void Cinema::OutPut_ListofTickets(){
    for (int i = 0; i < ticket.size(); i++){
        cout << "\nInformation of ticket " << i+1 << ": ";
        ticket[i] -> Output();
        cout << endl;
    }
}

void Cinema::sort_ListofTickets(){
    for (int i = 0; i < ticket.size() - 1; i++) {
        for (int j = 0; j < ticket.size() - i - 1; j++) {
            if (ticket[j]->price() > ticket[j + 1]->price()) {
                swap(ticket[j], ticket[j + 1]);
            }
        }
    }

    cout << "\nRegular Ticket(s): ";

    for (int i = 0; i < ticket.size(); i++){
        if (ticket[i]->get_TicketType() == "\nTicket type: Regular."){
            cout << "\nInformation of regular ticket " << i+1 << ": ";
            ticket[i]->Output();
            cout << endl;
        }
    }

    cout << "\nCombo Ticket(s): ";

    for (int i = 0; i < ticket.size(); i++){
        if (ticket[i]->get_TicketType() == "\nTicket type: Combo."){
            cout << "\nInformation of combo ticket " << i+1 << ": ";
            ticket[i]->Output();
            cout << endl;
        }
    }
}

void Cinema::save_toFile(char* filename){
    ofstream ofs(filename);
    if(!ofs){
        cout << "Error!";
    }

    for (int i = 0; i < ticket.size() - 1; i++) {
        for (int j = 0; j < ticket.size() - i - 1; j++) {
            if (ticket[j]->price() > ticket[j + 1]->price()) {
                swap(ticket[j], ticket[j + 1]);
            }
        }
    }

    ofs << "\nRegular Ticket(s): ";

    for (int i = 0; i < ticket.size(); i++){
        if (ticket[i]->get_TicketType() == "\nTicket type: Regular."){
            ofs << "\nInformation of regular ticket " << i+1 << ": ";
            ofs << ticket[i]->toString();
            cout << endl;
        }
    }

    ofs << "\nCombo Ticket(s): ";

    for (int i = 0; i < ticket.size(); i++){
        if (ticket[i]->get_TicketType() == "\nTicket type: Combo."){
            ofs << "\nInformation of combo ticket " << i+1 << ": ";
            ofs << ticket[i]->toString();
            cout << endl;
        }
    }
}


void Cinema::listof_tickets_24time_rangesof_Day(){
    int soldTickets[24] = {0}; 

    for (int i = 0; i < ticket.size(); i++){
        int ticketTime = ticket[i]->get_rangeofTime(); 

        if (ticketTime >= 0 && ticketTime < 24) { 
            soldTickets[ticketTime]++;
        }
    }

    for (int i = 0; i < 24; i++){
        cout << "\nList of tickets sold out between " << i << ":00 and " << i << ":59 : ";
        if (soldTickets[i] > 0){
            for(int j = 0; j < ticket.size(); j++){
                if(ticket[j]->get_rangeofTime() == i){
                    ticket[j]->Output();
                }
            }
        }
    }
}



