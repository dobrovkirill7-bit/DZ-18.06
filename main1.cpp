#include <iostream>
using namespace std;

// 1

/*
class Laptop {
private:
	string _brand;
	double _price;
public:
	Laptop(string brand, double price) : _brand(brand), _price(price){}
	~Laptop(){}


	void Info() {
		cout << "Brand: " << _brand << endl;
		cout << "Brand: " << _price << endl;
	}
};


int main()
{
	Laptop laptop1("Macbook", 100500);
	laptop1.Info();
}
*/



// 2
class Playlist {
private:
	string _songs;
	int _capacity;
	int _count;
public:
	Playlist(int MaxSongs) : _songs(), _capacity(MaxSongs), _count(){}

	void addSong(const char* SongName)
	{
		_songs = SongName;
		_count++;
	}

	~Playlist(){}

	void Show()
	{
		cout << "SOng: " << _songs << endl;
	}
};

int main()
{
	Playlist playlist(1);

	playlist.addSong("Pavel Plamenev");
	playlist.Show();
}