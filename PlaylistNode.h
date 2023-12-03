#ifndef PLAYLISTNODE_H
#define PLAYLISTNODE_H

#include <string>

class PlaylistNode {
  public:
    PlaylistNode(std::string ID = "none", std::string songTitle = "none", std::string artist = "none", int songDuration = 0);
    std::string GetID();
    std::string GetSongName();
    std::string GetArtistName();
    int GetSongLength();
    PlayListNode* GetNext();
    void InsertAfter(PlaylistNode* nodePtr);
    void SetNext(PlaylistNode* nodePtr);
    void PrintPlaylistNode();

  private:
    std::string uniqueID;
    std::string songName;
    std::string artistName;
    int songLength;
    PlaylistNode* nextNodePtr;
};
#endif
