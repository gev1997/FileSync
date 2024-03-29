#include "MainFrame.h"
#include "../FileSyncApp.h"

GUI::MainFrame::MainFrame()
    : wxFrame{nullptr, wxID_ANY, "File Sync"}
    , mApp{dynamic_cast<FileSyncApp&>(*wxApp::GetInstance())}
    , mPanelStart{new PanelStart(this)}
    , mPanelMain{new PanelMain(this)}
{
    SetWindowStyle(GetWindowStyle() & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX));
    Display(MainFrame::Panel::Start);
}

void GUI::MainFrame::Display(Panel panel)
{
    mPanelStart->Display(panel == Panel::Start);
    mPanelMain->Display(panel == Panel::Main);
}

void GUI::MainFrame::Load()
{
    // TODO: Maybe need to check Load() fail here ?
    mApp.GetDB().Load();
    mPanelMain->FillControlsData();
    Display(MainFrame::Panel::Main);
}

void GUI::MainFrame::Back()
{
    Display(MainFrame::Panel::Start);
}
