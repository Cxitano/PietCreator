#ifndef ACTIONHANDLER_H
#define ACTIONHANDLER_H

#include <QColor>
#include <QImage>

class ImageModel;
class QUndoStack;

class UndoHandler
{

public:
    UndoHandler(QUndoStack * undostack, ImageModel* model);

    void createEditPixel(int x, int y, QColor new_color);
    void insertImage(int x, int y, QImage imageToInsert);

private:
    ImageModel* mModel;
    QUndoStack* mUndoStack;
};

#endif // ACTIONHANDLER_H
