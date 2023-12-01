#ifndef PLAYLISTNODE_H
#define PLAYLISTNODE_H

#include <string>

class PlaylistNode {
  public:
    PlaylistNode();
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
    std::string uniqueID;
    std::string songName;
    std::string artistName;
    int songLength;
    PlaylistNode* nextNodePtr;
};
#endif
