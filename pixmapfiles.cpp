#include "pixmapfiles.hpp"

QStringList PixmapFiles::filesName_
{
    R"(D:\Documents\Projects\Binary_clock\images\inactive.png)",
    R"(D:\Documents\Projects\Binary_clock\images\active.png)"
};

QString PixmapFiles::getFileName(int index)
{
    return filesName_[index];
}
