#ifndef PROTOTYPES
#define PROTOTYPES



struct Laptop {
	double Inches;
	int Memory; //Ram in GB
	char brand[10];
	
	
};

struct Desk {
	double height;
	double width;
	double length;
	char color[10];
};

struct Room {
	Laptop laptop;
	Desk desk;
};

void readLaptop(Laptop&);
void readDesk(Desk&);
void printDesk(const Desk);
void printLaptop(const Laptop);

Laptop createDefaultLaptop();
Desk createDefaultDesk();

void readRoom(Room&);
void printRoom(const Room);
#endif // PROTOTYPES
