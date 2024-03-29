#pragma once

#include <wx/frame.h>

#include "PanelStart.h"
#include "PanelMain.h"

class FileSyncApp;

namespace GUI { class MainFrame; };

class GUI::MainFrame : public wxFrame
{
public:
    enum class Panel { Start, Main };

    MainFrame();
    virtual ~MainFrame() = default;

    void Load();
    void Back();

private:
    void Display(Panel panel);

private:
    FileSyncApp& mApp;
    PanelStart* mPanelStart;
    PanelMain* mPanelMain;
};
