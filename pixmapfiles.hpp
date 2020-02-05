#ifndef PIXMAPFILES_HPP
#define PIXMAPFILES_HPP

#include <QStringList>

class PixmapFiles
{
public:
    PixmapFiles() = default;

    static QString getFileName(int index);

private:
    static QStringList filesName_;
};

#endif // PIXMAPFILES_HPP
