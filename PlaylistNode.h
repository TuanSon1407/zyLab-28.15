#ifndef PLAYLISTNODE_H
#define PLAYLISTNODE_H

#include <string>

class PlaylistNode {
  public:
    PlaylistNode(std::string ID, std::string songTitle, std::string artist, int songDuration);
    std::string GetID();
    std::string GetSongName();
    std::string GetArtistName();
    int GetSongLength();
    PlayListNode* GetNext();
    void InsertAfter(PlaylistNode* nodePtr);
    void SetNext(PlaylistNode* nodePtr);
    void PrintPlaylistNode();

  private:
    std::string uniqueID = "none";
    std::string songName = "none";
    std::string artistName = "none";
    int songLength = 0;
    PlaylistNode* nextNodePtr = nullptr;
};
#endif
