#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)          
//  Noun:        swimmer
//  action 1:    the swimmer dives into water
swimmer.dive();
//  action 2:    the swimmer does the backstroke
swimmer.doesBackStroke();
//  action 3:    the swimmer does the breaststroke
swimmer.doesBreastStroke();
//  2)
//  Noun:        radio
//  action 1:    the radio plays the cassette
radio.playCassette();
//  action 2:    the radio plays the CD
radio.playCD();
//  action 3:    the radio plays the mp3 file
radio.playMP3();
//  3)
//  Noun:        traffic light
//  action 1:    the traffic light turns red
trafficLight.turnRed();
//  action 2:    the traffic light turns yellow
trafficLight.turnYellow();
//  action 3:    the traffic light turns green
trafficLight.turnGreen();
//  4)
//  Noun:        lion
//  action 1:    the lion hunts 
lion.hunt();
//  action 2:    the lion eats
lion.eats();
//  action 3:    the lion roars
lion.roar();
//  5)
//  Noun:        dog
//  action 1:    the dog barks
dog.bark();
//  action 2:    the dog bites
dog.bite();
//  action 3:    the dog sleeps
dog.sleep();
//  6)
//  Noun:        quarterback
//  action 1:    the quarterback throws the ball
quarterback.throwBall();
//  action 2:    the quarterback fumbles the ball
quarterback.fumbleBall();
//  action 3:    the quarterback runs with ball
quarterback.runBall();
//  7)
//  Noun:        pitcher
//  action 1:    the pitcher throws fastball
pitcher.throwFastball();
//  action 2:    the pitcher throws curveball
pitcher.throwCurveball();
//  action 3:    the pitcher throws changeup
pitcher.throwChangeup();
//  8)
//  Noun:        jukebox 
//  action 1:    the jukebox accepts money
jukebox.acceptMoney();
//  action 2:    the jukebox accepts song selection
jukebox.acceptSongSelection();
//  action 3:    the jukebox plays song
jukebox.playSong();
//  9)
//  Noun:        store clerk
//  action 1:    the store clerk accepts money
storeClerk.acceptMoney();
//  action 2:    the store clerk counts change
storeClerk.countChange();
//  action 3:    the store clerk gives change to customer
storeClerk.giveChange();
//  10)          
//  Noun:        point guard
//  action 1:    the point guard passes the ball
pointGuard.passBall();
//  action 2:    the point guard steals the ball
pointGuard.stealBall();
//  action 3:    the point guard shoots the ball
pointGuard.shootBall();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
