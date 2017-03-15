/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_DB2227C1418B1EA__
#define __JUCE_HEADER_DB2227C1418B1EA__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"

class ReverbProcessor;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ReverbEditor  : public AudioProcessorEditor
{
public:
    //==============================================================================
    ReverbEditor (ReverbProcessor& processor, AudioProcessorValueTreeState& vts);
    ~ReverbEditor();

    //==============================================================================
    void paint (Graphics& g);
    void resized();
	typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]
	AudioProcessorValueTreeState& valueTreeState;
    //==============================================================================
    ScopedPointer<Slider> roomSize;
    ScopedPointer<Label> roomSizeLabel;
	ScopedPointer<SliderAttachment> roomSizeAttachment;

    ScopedPointer<Slider> damping;
    ScopedPointer<Label> dampingLabel;
	ScopedPointer<SliderAttachment> dampingAttachment;

    ScopedPointer<Slider> wet;
    ScopedPointer<Label> wetLabel;
	ScopedPointer<SliderAttachment> wetAttachment;

    ScopedPointer<Slider> dry;
    ScopedPointer<Label> dryLabel;
	ScopedPointer<SliderAttachment> dryAttachment;

    ScopedPointer<Slider> width;
    ScopedPointer<Label> widthLabel;
	ScopedPointer<SliderAttachment> widthAttachment;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ReverbEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_DB2227C1418B1EA__
