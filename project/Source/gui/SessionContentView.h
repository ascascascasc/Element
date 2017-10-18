
#pragma once

#include "gui/ContentComponent.h"

namespace Element {
class SessionPropertyPanel;
class SessionContentView : public ContentView {
public:
    SessionContentView();
    ~SessionContentView();
    
    void resized() override;
    void didBecomeActive() override;

private:
    ScopedPointer<SessionPropertyPanel> props;
};
    
}