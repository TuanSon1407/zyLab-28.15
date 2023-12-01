#ifndef PLAYLISTNODE_H
#define PLAYLISTNODE_H

class PlaylistNode {
  public:
    string GetID();
    string GetSongName();
    string GetArtistName();
    int GetSongLength();
    PlayListNode* GetNext();
    void InsertAfter(PlaylistNode* nodePtr);
    void SetNext(PlaylistNode* nodePtr);
    void PrintPlaylistNode();
  private:
    string uniqueID = "none";
    string songName = "none";
    string artistName = "none";
    int songLength = 0;
    PlaylistNode* nextNodePtr = nullptr;
};
#endif
