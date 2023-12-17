#include "wxMainFrame.h"
#include "FileSyncApp.h"

wxMainFrame::wxMainFrame()
    : wxFrame{nullptr, wxID_ANY, "File Sync"}
    , mApp{dynamic_cast<FileSyncApp&>(*wxApp::GetInstance())}
    , mPanelStart{new wxPanelStart(this)}
    , mPanelMain{new wxPanelMain(this)}
{
    Display(wxMainFrame::Panel::Start);
}

void wxMainFrame::Display(Panel panel)
{
    mPanelStart->Display(panel == Panel::Start);
    mPanelMain->Display(panel == Panel::Main);
}

void wxMainFrame::Loaded()
{
    mPanelMain->FillControlsData();
    Display(wxMainFrame::Panel::Main);
}

void wxMainFrame::Back()
{
    Display(wxMainFrame::Panel::Start);
}
