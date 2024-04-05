#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
    string title;
    float price;

public:
    Movie(string title, float price) : title(title), price(price) {}

    string getTitle() const {
        return title;
    }

    float getPrice() const {
        return price;
    }
};

class TicketCounter {
private:
    Movie movie;
    int ticketsSold;

public:
    TicketCounter(Movie movie) : movie(movie), ticketsSold(0) {}

    void sellTicket(int quantity) {
        ticketsSold += quantity;
        cout << "Sold " << quantity << " tickets for " << movie.getTitle() << " at $" << movie.getPrice() << " each." << endl;
    }

    float getTotalRevenue() const {
        return ticketsSold * movie.getPrice();
    }
};

int main() {
    string title;
    float price;
    int quantity;

    cout << "Enter the movie title: ";
    getline(cin, title);

    cout << "Enter the ticket price: $";
    cin >> price;

    cout << "Enter the quantity of tickets to sell: ";
    cin >> quantity;

    Movie movie(title, price);
    TicketCounter ticketCounter(movie);

    ticketCounter.sellTicket(quantity);

    cout << "Total revenue: $" << ticketCounter.getTotalRevenue() << endl;

    return 0;
}
