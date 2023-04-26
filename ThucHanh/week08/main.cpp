#include "cinema.h"

using namespace std;

int main(){
    // Ticket *t = new RegularTicket;
    // t -> Input();
    // t -> Output();
    Cinema c;
    c.Input_ListofTickets();
    c.OutPut_ListofTickets();
    c.sort_ListofTickets();
    char filename[20] = "document.txt";
    c.save_toFile(filename);
    c.listof_tickets_24time_rangesof_Day();
}