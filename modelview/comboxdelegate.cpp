#include "comboxdelegate.h"

comboxDelegate::comboxDelegate(QObject *parent)
    : QStyledItemDelegate(parent)
{

}

QWidget *comboxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{

    return nullptr;
}

void comboxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{

}

void comboxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{

}

void comboxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{

}
