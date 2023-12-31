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

      PlaylistNode* tempNode = new PlaylistNode(ID, songTitle, artist, songDuration);
      headNode->InsertAfter(tempNode);
      return tempNode;
   }

   if (option == 'd') {
      string currID;
      PlaylistNode* previousNode;
      PlaylistNode* nextNode;
   
      cout << "REMOVE SONG" << endl;
      cout << "Enter song's unique ID:" << endl;
      getline (cin, ID);
      getline (cin, ID);
      
      while (headNode != nullptr) {
         currID = headNode->GetID();
         if (ID == currID) {
            cout << "\"" << headNode->GetSongName() << "\"" << " removed.\n" << endl;
            delete headNode;
            nextNode = headNode->GetNext();
            previousNode->SetNext(nextNode);
         }
         previousNode = headNode;
         headNode = headNode->GetNext();
      }
   }
   
   if (option == 's') {
      string currArtist;
      cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
      cout << "Enter artist's name:\n" << endl;
      getline (cin, artist);
      getline (cin,artist);

      int i = 0;
      while (headNode != nullptr) {
         currArtist = headNode->GetArtistName();
         if (artist == currArtist) {
            cout << i << "." << endl;
            headNode->PrintPlaylistNode();
            cout << endl;
         }
         headNode = headNode->GetNext();
         ++i;
      }
   }
   
   if (option == 't') {
      int totalDuration = 0;
      cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
      while (headNode != nullptr) {
         songDuration = headNode->GetSongLength();
         totalDuration += songDuration;
         headNode = headNode->GetNext();
      }
      cout << "Total time: " << totalDuration << " seconds\n" << endl;
   }
      
   if (option == 'o') {
      PlaylistNode* currNode = headNode->GetNext();
      cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
      if (currNode == nullptr) {
         cout << "Playlist is empty\n" << endl;
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
      if (option == 'a') {
         lastNode = ExecuteMenu(option, playlistTitle, lastNode);
      }
      if ((option == 'd') || (option == 's') || (option == 't') || (option == 'o')) {
         lastNode = ExecuteMenu(option, playlistTitle, headNode);
      }
   }
   
   return 0;
}
