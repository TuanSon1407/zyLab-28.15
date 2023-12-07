#include <iostream>
#include "PlaylistNode.h"

using namespace std;

void PrintMenu(const string playlistTitle) {
   /* Type your code here */
   
}

PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode) {
   /* Type your code here */
   
}

int main() {
   string playlistName;
   cout << "Enter playlist's title: " << endl;
   getline (cin, playlistName);

   string ID, songTitle, artist;
   int songDuration;
   getline(cin, ID);
   getline(cin, songTitle);
   getline (cin, artist);
   cin >> songDuration;  
   
   return 0;
}
