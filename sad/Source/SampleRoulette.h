/*
  ==============================================================================

    SampleRoulette.h
    Created: 7 Sep 2021 12:32:43pm
    Author:  socks

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class SampleRoulette {

    const int SPOKES = 360;
    juce::File* wheel[];

    void allocateSpoke(int spoke, juce::File* sound);

public:
    SampleRoulette() {
        wheel[SPOKES] = {
          NULL
        };
    }
    void playSpoke(int spoke);
    void allocateSlice(int leftBound, int rightBound, juce::File* sound);
};