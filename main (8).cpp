// Name: Miguel Angel Puga
// Date: November 24, 2026
// Class: CSCI 1470.0X
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Jonatan Reyes
// Program Description: Interactive menu driver for the Music player class.

#include <iostream>
#include <string>
#include <cctype>
#include "Music.h"
using namespace std;

int main()
{
    Music player;
    bool isCreated = false;
    char choice;

    do
    {
        cout << "\n=== Music Player System ===" << endl;
        cout << "Please select an option:" << endl;

        if (!isCreated)
        {
            cout << "(N) Create a new playlist" << endl;
            cout << "(E) Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            choice = toupper(choice);

            if (choice == 'N')
            {
                string name, track;
                int vol;

                cin.ignore(); 
                cout << "Enter playlist name: ";
                getline(cin, name);

                cout << "Enter starting track: ";
                getline(cin, track);

                cout << "Enter initial volume (0-100): ";
                cin >> vol;

                player.setPlaylistName(name);
                player.setCurrentTrack(track);
                player.setVolume(vol);

                isCreated = true;
                cout << "Playlist '" << player.getPlaylistName() << "' created!" << endl;
            }
            else if (choice != 'E')
            {
                cout << "Invalid option. Please try again." << endl;
            }
        }
        else
        {
            cout << "(P) Play / Pause" << endl;
            cout << "(U) Volume Up" << endl;
            cout << "(D) Volume Down" << endl;
            cout << "(C) Change Track" << endl;
            cout << "(S) Show Player Status" << endl;
            cout << "(E) Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            choice = toupper(choice);

            if (choice == 'P')
            {
                player.togglePlayPause();
            }
            else if (choice == 'U')
            {
                player.volumeUp();
            }
            else if (choice == 'D')
            {
                player.volumeDown();
            }
            else if (choice == 'C')
            {
                string newTrack;
                cin.ignore();
                cout << "Enter new track name: ";
                getline(cin, newTrack);
                player.setCurrentTrack(newTrack);
                cout << "Track updated to: " << player.getCurrentTrack() << endl;
            }
            else if (choice == 'S')
            {
                player.displayStatus();
            }
            else if (choice != 'E')
            {
                cout << "Invalid option. Please try again." << endl;
            }
        }

    } while (choice != 'E');

    cout << "Exiting Music Player. Goodbye!" << endl;
    return 0;
}