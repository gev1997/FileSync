#pragma once

#include <wx/app.h>

#include "wxMainFrame.h"
#include "DB/Manager.h"

class FileSyncApp : public wxApp
{
public:
    FileSyncApp();
    virtual ~FileSyncApp() = default;

    bool OnInit() override;
    wxMainFrame& GetMainFrame();
    DB::Manager& GetDB();

private:
    wxMainFrame* mMainFrame;
    DB::Manager mCopyDB;
};
