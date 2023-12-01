#include <iostream>
using namespace std;

#include "PlaylistNode.h"
PlaylistNode::PlaylistNode () {
  uniqueID = "none:;
  songName = "none";
  artistName = "none";
  songLength = 0;
  nextNodePtr = nullptr;
}

PlaylistNode::PlaylistNode (string ID, string songTitle, string artist, int songDuration) {
  uniqueID = ID;
  songName = songTitle;
  artistName = artist;
  songLength = songDuration;
  nextNodePtr = nullptr;
}

string PlaylistNode::GetID() {return uniqueID}

string PlaylistNode::GetSongName() {return songName}

string PlaylistNode::GetArtistName() {return artistName}

int PlaylistNode::GetSongLength() {return songLength}

PlayListNode* PlaylistNode::GetNext() {

}

void PlaylistNode::InsertAfter(PlaylistNode* nodePtr) {

}

void PlaylistNode::SetNext(PlaylistNode* nodePtr) {

}

void PlaylistNode::PrintPlaylistNode() {
  cout << "Unique ID: " << uniqueID << endl;
  cout << "Song Name: " << songName << endl;
  cout << "Artist Name: " << artistName << endl;
  cout << "Song Length (in seconds): " << songLength << endl;
}
