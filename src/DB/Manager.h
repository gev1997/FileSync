#pragma once

#include "File.h"

namespace DB { class Manager; };

class DB::Manager
{
public:
    Manager();
    ~Manager() = default;

    const fs::path& GetSourcePath() const;
    const fs::path& GetDestinationPath() const;
    const FileType& GetFiles() const;
    const ExtensionType& GetExtensions() const;
    void Filter(const std::string& extension, FilterType filter);
    void SetData(const fs::path& sourcePath, const fs::path& destinationPath, bool subFolders);
    long CopyFiles(const std::vector<int>& checkedItems);
    void Load();

private:
    template <typename Iter>
    void _Load();

private:
    fs::path mSourcePath;
    fs::path mDestinationPath;
    bool mSubFolders;
    FileType mFiles;
    FileType mVisibleFiles;
    ExtensionType mExtensions;
};
