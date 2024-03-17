#pragma once

#include <wx/frame.h>

#include "wxPanelStart.h"
#include "wxPanelMain.h"

class FileSyncApp;

namespace gui { class MainFrame; };

class gui::MainFrame : public wxFrame
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