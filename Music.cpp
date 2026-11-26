
#include <iostream>
#include "Music.h"
using namespace std;

Music::Music()
{
    playlistName = "Unknown";
    currentTrack = "None";
    volume = 20;
    isPlaying = false;
}

string Music::getPlaylistName() const
{
    return playlistName;
}
string Music::getCurrentTrack() const
{
    return currentTrack;
}
int Music::getVolume() const
{
   return volume;
}
bool Music::getIsPlaying() const
{
    return isPlaying;
}

void Music::setPlaylistName(string name)
{
    playlistName = name;
}
void Music::setCurrentTrack(string track)
{
    currentTrack = track;
}
void Music::setVolume(int vol)
{
    if (vol >= 0 && vol <= 100)
    volume = vol;
}
void Music::togglePlayPause()
{
    isPlaying = !isPlaying;
    if(isPlaying)
        cout << "Now playing: " << currentTrack << endl;
    else
        cout << "Playback paused. " << endl;
    
}

void Music::volumeUp()
{
    if (volume + 10 <= 100)
        volume += 10;
    else
        cout << "Volume at max";
}
void Music::volumeDown()
{
    if (volume - 10 >= 0)
        volume -= 10;
    else 
        cout << "Volume is at minimum";
}
void Music::displayStatus() const
{
    cout << "\n--- Player Status ---" << endl;
    cout << "Playlist: " << playlistName << endl;
    cout << "Track:    " << currentTrack << endl;
    cout << "Status:   " << (isPlaying ? "Playing" : "Paused") << endl;
    cout << "Volume:   " << volume << "%" << endl;
}







