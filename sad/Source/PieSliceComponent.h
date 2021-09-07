/*
  ==============================================================================

    PieSliceComponent.h
    Created: 7 Sep 2021 12:39:17pm
    Author:  socks

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class PieSliceComponent  : public juce::Component
{
public:
    PieSliceComponent();
    ~PieSliceComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PieSliceComponent)
};
