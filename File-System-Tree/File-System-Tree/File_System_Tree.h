#ifndef FILE_SYSTEM_TREE_H
#define FILE_SYSTEM_TREE_H

#include <QApplication>
#include <QTreeView>
#include <QFileSystemModel>
#include <QVBoxLayout>
#include <QWidget>
#include <QHeaderView>

class File_System_Tree : public QWidget
{
    Q_OBJECT
public:
    File_System_Tree(QWidget* parent = nullptr);
private:
    QTreeView *treeView;
    QFileSystemModel *fileSystemModel;
};

#endif // FILE_SYSTEM_TREE_H
