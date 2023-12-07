#include <iostream>
#include "PlaylistNode.h"

using namespace std;

void PrintMenu(const string playlistTitle) {
   string userInput;
   
   cout << playlistTitle <<  " PLAYLIST MENU" << endl;
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist" << endl;
   cout << "t - Output total time of playlist (in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit\n" << endl;

   cout << "Choose an option:" << endl;
}

PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode) {
   /* Type your code here */
   
}

int main() {
   string playlistName;
   cout << "Enter playlist's title: " << endl;
   getline (cin, playlistName);
   PrintMenu(playlistName);

   string ID, songTitle, artist;
   int songDuration;
   getline(cin, ID);
   getline(cin, songTitle);
   getline (cin, artist);
   cin >> songDuration;  
   
   return 0;
}
