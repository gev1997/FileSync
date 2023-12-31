#include "wxDirPicker.h"

wxDirPicker::wxDirPicker(wxWindow* parent, const wxString& label, const wxPoint& pos, const wxSize& size)
    : wxDirPickerCtrl{parent, wxID_ANY, wxEmptyString, wxDirSelectorPromptStr, pos, size}
    , mTextCtrl{new wxDirTextCtrl(this, {0, 3}, {405, 23})}
{
    GetPickerCtrl()->SetLabel(label);

    if (m_text) m_text->Destroy();
    m_text = mTextCtrl;
}

bool wxDirPicker::IsDirectory() const
{
    return mTextCtrl->IsDirectory();
}
