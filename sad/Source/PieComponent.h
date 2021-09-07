/*
  ==============================================================================

    PieComponent.h
    Created: 7 Sep 2021 12:39:27pm
    Author:  socks

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class PieComponent  : public juce::Component
{
public:
    PieComponent();
    ~PieComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PieComponent)
};
