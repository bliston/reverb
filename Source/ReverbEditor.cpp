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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "ReverbEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
#include "ReverbProcessor.h"
//[/MiscUserDefs]

//==============================================================================
ReverbEditor::ReverbEditor (ReverbProcessor& processor, AudioProcessorValueTreeState& vts)
    : AudioProcessorEditor (processor),
	valueTreeState(vts)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (roomSize = new Slider ("Room Size Slider"));
    roomSize->setRange (0, 1, 0);
    roomSize->setSliderStyle (Slider::LinearHorizontal);
    roomSize->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
	roomSizeAttachment = new SliderAttachment(valueTreeState, "roomSize", *roomSize);

    addAndMakeVisible (roomSizeLabel = new Label ("Room Size Label",
                                                  TRANS("Room Size:")));
    roomSizeLabel->setFont (Font (15.00f, Font::plain));
    roomSizeLabel->setJustificationType (Justification::centredLeft);
    roomSizeLabel->setEditable (false, false, false);
    roomSizeLabel->setColour (TextEditor::textColourId, Colours::black);
    roomSizeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (damping = new Slider ("Damping Slider"));
    damping->setRange (0, 1, 0);
    damping->setSliderStyle (Slider::LinearHorizontal);
    damping->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
	dampingAttachment = new SliderAttachment(valueTreeState, "damping", *damping);

    addAndMakeVisible (dampingLabel = new Label ("Damping Label",
                                                 TRANS("Damping:")));
    dampingLabel->setFont (Font (15.00f, Font::plain));
    dampingLabel->setJustificationType (Justification::centredLeft);
    dampingLabel->setEditable (false, false, false);
    dampingLabel->setColour (TextEditor::textColourId, Colours::black);
    dampingLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wet = new Slider ("Wet Slider"));
    wet->setRange (0, 1, 0);
    wet->setSliderStyle (Slider::LinearHorizontal);
    wet->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
	wetAttachment = new SliderAttachment(valueTreeState, "wet", *wet);

    addAndMakeVisible (wetLabel = new Label ("Wet Label",
                                             TRANS("Wet:")));
    wetLabel->setFont (Font (15.00f, Font::plain));
    wetLabel->setJustificationType (Justification::centredLeft);
    wetLabel->setEditable (false, false, false);
    wetLabel->setColour (TextEditor::textColourId, Colours::black);
    wetLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dry = new Slider ("Dry Slider"));
    dry->setRange (0, 1, 0);
    dry->setSliderStyle (Slider::LinearHorizontal);
    dry->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
	dryAttachment = new SliderAttachment(valueTreeState, "dry", *dry);

    addAndMakeVisible (dryLabel = new Label ("Dry Label",
                                             TRANS("Dry:")));
    dryLabel->setFont (Font (15.00f, Font::plain));
    dryLabel->setJustificationType (Justification::centredLeft);
    dryLabel->setEditable (false, false, false);
    dryLabel->setColour (TextEditor::textColourId, Colours::black);
    dryLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (width = new Slider ("Width Slider"));
    width->setRange (0, 1, 0);
    width->setSliderStyle (Slider::LinearHorizontal);
    width->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
	widthAttachment = new SliderAttachment(valueTreeState, "width", *width);

    addAndMakeVisible (widthLabel = new Label ("Width Label",
                                               TRANS("Width:")));
    widthLabel->setFont (Font (15.00f, Font::plain));
    widthLabel->setJustificationType (Justification::centredLeft);
    widthLabel->setEditable (false, false, false);
    widthLabel->setColour (TextEditor::textColourId, Colours::black);
    widthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 140);
}

ReverbEditor::~ReverbEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ReverbEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ReverbEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    roomSize->setBounds (88, 8, 288, 24);
    roomSizeLabel->setBounds (3, 8, 79, 24);
    damping->setBounds (88, 34, 288, 24);
    dampingLabel->setBounds (3, 34, 79, 24);
    wet->setBounds (88, 61, 288, 24);
    wetLabel->setBounds (3, 61, 79, 24);
    dry->setBounds (88, 87, 288, 24);
    dryLabel->setBounds (3, 87, 79, 24);
    width->setBounds (88, 112, 288, 24);
    widthLabel->setBounds (3, 112, 79, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}