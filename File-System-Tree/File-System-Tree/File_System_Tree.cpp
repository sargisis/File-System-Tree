#include "File_System_Tree.h"

File_System_Tree::File_System_Tree(QWidget* parent)
    : QWidget(parent)
{
    setWindowTitle("File-System-Tree");

    setFixedSize(500,500);

    QVBoxLayout* layout = new QVBoxLayout(this);

    treeView = new QTreeView(this);
    layout->addWidget(treeView);

    fileSystemModel = new QFileSystemModel(this);
    fileSystemModel->setRootPath(QDir::rootPath());
    treeView->setModel(fileSystemModel);

    treeView->setRootIndex(fileSystemModel->index(QDir::rootPath()));

    treeView->setUniformRowHeights(true);
    treeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
}
