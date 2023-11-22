#include <iostream>

#include "FileSyncApp.h"

FileSyncApp::FileSyncApp()
    : mMainFrame{new wxMainFrame()}
    , mCopyDB{new DB::Manager()}
{}

bool FileSyncApp::OnInit()
{
    assert(mMainFrame);
    assert(mCopyDB);
    mMainFrame->Show();
    mMainFrame->Centre();

    return true;
}

wxMainFrame* FileSyncApp::GetMainFrame() const
{
    return mMainFrame;
}

DB::Manager* FileSyncApp::GetDB() const
{
    return mCopyDB.get();
}

wxIMPLEMENT_APP(FileSyncApp);
