#include <list>
#include <iostream>
using namespace std;

/// <summary>
/// Class demo for YoutubeChannel with some public fields and a
/// constructor.
/// </summary>
class YoutubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;

	YoutubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}

	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
	}
};