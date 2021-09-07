/*
  ==============================================================================

    DrumkitPieceComponent.h
    Created: 7 Sep 2021 12:44:54pm
    Author:  socks

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class DrumkitPieceComponent  : public juce::Component
{
public:
    DrumkitPieceComponent();
    ~DrumkitPieceComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DrumkitPieceComponent)
};
