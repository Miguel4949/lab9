/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <iostream>
using namespace std;

class Music 
{
private:
    string playlistName;
    string currentTrack;
    int volume;
    bool isPlaying;

public:
    Music();
    
    string getPlaylistName() const;
    string getCurrentTrack() const;
    int getVolume() const;
    bool getIsPlaying() const;

    void setPlaylistName(string name);
    void setCurrentTrack(string track);
    void setVolume(int vol);

    void togglePlayPause();
    void volumeUp();
    void volumeDown();
    void displayStatus() const;
};
