/*
    Signals.h - This file is part of Element
    Copyright (C) 2014  Kushview, LLC.  All rights reserved.
*/

#ifndef ELEMENT_APP_H
#define ELEMENT_APP_H

#if HAVE_JUCE_CORE
 #include <juce/juce.h>
 #include <element/element.h>
#else
 #include "JuceHeader.h"
#endif

namespace Element {
namespace Tags
{
    const Identifier arc                = "arc";
    const Identifier arcs               = "arcs";
    const Identifier graph              = "graph";
    const Identifier node               = "node";
    const Identifier nodes              = "nodes";
    
    const Identifier sourceNode         = "sourceNode";
    const Identifier sourcePort         = "sourcePort";
    const Identifier sourceChannel      = "sourceChannel";
    const Identifier destNode           = "destNode";
    const Identifier destPort           = "destPort";
    const Identifier destChannel        = "destChannel";
}
}

#endif  // ELEMENT_APP_H