/*
  ==============================================================================

    SampleRoulette.cpp
    Created: 7 Sep 2021 12:32:43pm
    Author:  socks

  ==============================================================================
*/

#include "SampleRoulette.h"

void SampleRoulette::allocateSpoke(int spoke, juce::File * sound) {
  wheel[spoke % 360] = sound;
}
void SampleRoulette::playSpoke(int spoke) {
  if (NULL != wheel[spoke]) { // if a spoke is empty, don't play it
    juce::File * s = wheel[spoke];
    // todo: audio manager to play this
  }
}
void SampleRoulette::allocateSlice(int leftBound, int rightBound, juce::File * sound) { // this is done like this for performance reasons
  if (rightBound < leftBound) {
    // throw an exception
  }
  for (int i = leftBound; i < rightBound; i++) {
    allocateSpoke(i, sound);
  }
}