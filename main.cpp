#include <iostream>
#include "PlaylistNode.h"

using namespace std;

void PrintMenu(const string playlistTitle) {
   cout << playlistTitle <<  " PLAYLIST MENU" << endl;
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist" << endl;
   cout << "t - Output total time of playlist (in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit\n" << endl;
}

PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode) {
   PlaylistNode* tempNode;

   if (option == 'o') {
      if (headNode == nullptr) {
         cout << "Playlist is empty" << endl;
      }

      int i = 1;
      while (headNode != nullptr) {
         cout << i << "." << endl;
         headNode->PrintPlaylistNode();
         cout << endl;
         headNode = headNode->GetNext();
         ++i;
      }
   }
}

int main() {
   string playlistTitle;
   playlistNode* headNode;
   char option;
   
   cout << "Enter playlist's title: " << endl;
   getline (cin, playlistTitle);
      
   while ((option != 'q')) {
      PrintMenu(playlistTitle);
      cout << "Choose an option:" << endl;
      cin >> option;
      while (!((option == 'a') || (option == 'd') || (option == 'c') || (option == 's') || (option == 't') || (option == 'o') || (option == 'q'))) {
         PrintMenu(playlistTitle);
         cout << "Choose an option:" << endl;
         cin >> option;
      }
      if (option == 'q') {
         break;
      }
    headNode = ExecuteMenu(option, playlistTitle, headNode);    
   }


   string ID, songTitle, artist;
   int songDuration;
   getline(cin, ID);
   getline(cin, songTitle);
   getline (cin, artist);
   cin >> songDuration;  
   
   return 0;
}
