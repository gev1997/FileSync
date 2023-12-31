#pragma once

#include <wx/textctrl.h>

class wxDirTextCtrl : public wxTextCtrl
{
public:
    wxDirTextCtrl(wxWindow* parent, const wxPoint& pos, const wxSize& size);
    virtual ~wxDirTextCtrl() = default;

    bool IsDirectory() const;

private:
    void ValidatePath();
    void ChangeValue(const wxString& value) override;
    void OnTextChanged(wxCommandEvent& event);
};
