/*
  ==============================================================================

    VelocityRangeComponent.h
    Created: 7 Sep 2021 12:44:09pm
    Author:  socks

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class VelocityRangeComponent  : public juce::Component
{
public:
    VelocityRangeComponent();
    ~VelocityRangeComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VelocityRangeComponent)
};
