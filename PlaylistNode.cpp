#include <iostream>
#include <string>
using namespace std;

#include "PlaylistNode.h"

PlaylistNode::PlaylistNode(string ID, string songTitle, string artist, int songDuration) {
  uniqueID = ID;
  songName = songTitle;
  artistName = artist;
  songLength = songDuration;
  nextNodePtr = nullptr;
}

string PlaylistNode::GetID() {return uniqueID;}

string PlaylistNode::GetSongName() {return songName;}

string PlaylistNode::GetArtistName() {return artistName;}

int PlaylistNode::GetSongLength() {return songLength;}

PlaylistNode* PlaylistNode::GetNext() {return nextNodePtr;}

void PlaylistNode::InsertAfter(PlaylistNode* nodePtr) {
  PlaylistNode* tempNodePtr = nullptr;

  tempNodePtr = this->nextNodePtr;
  this->nextNodePtr = nodePtr;
  nodePtr->nextNodePtr = tempNodePtr;
}

void PlaylistNode::SetNext(PlaylistNode* nodePtr) {
  this->nextNodePtr = nodePtr;
}

void PlaylistNode::PrintPlaylistNode() {
  cout << "Unique ID: " << uniqueID << endl;
  cout << "Song Name: " << songName << endl;
  cout << "Artist Name: " << artistName << endl;
  cout << "Song Length (in seconds): " << songLength << endl;
}
