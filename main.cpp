#include <iostream>
#include <string>
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
   PlaylistNode* currNode;
   string temp;
   string ID, songTitle, artist;
   int songDuration;

   if (option == 'a') {
      cout << "ADD SONG" << endl;
      cout << "Enter song's unique ID:" << endl;
      getline (cin, ID);
      getline (cin, ID);
      
      cout << "Enter song's name:" << endl;
      getline (cin, songTitle);
      
      cout << "Enter artist's name:" << endl;
      getline (cin, artist);

      cout << "Enter song's length (in seconds):\n" << endl;
      cin >> songDuration;

      tempNode = new PlaylistNode(ID, songTitle, artist, songDuration);
      headNode->InsertAfter(tempNode);
      return tempNode;
   }

   if (option == 'o') {
      currNode = headNode->GetNext();
      cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
      if (currNode == nullptr) {
         cout << "Playlist is empty" << endl;
      }

      int i = 1;
      while (currNode != nullptr) {
         cout << i << "." << endl;
         currNode->PrintPlaylistNode();
         cout << endl;
         currNode = currNode->GetNext();
         ++i;
      }
   }
}

int main() {
   string playlistTitle;
   PlaylistNode* headNode;
   PlaylistNode* lastNode;
   char option;
   
   headNode = new PlaylistNode();
   lastNode = headNode;
   
   cout << "Enter playlist's title:\n" << endl;
   getline (cin, playlistTitle);
      
   while (option != 'q') {
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
    lastNode = ExecuteMenu(option, playlistTitle, headNode);
   }
   
   return 0;
}
