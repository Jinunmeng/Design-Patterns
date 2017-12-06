#ifndef COMBOXDELEGATE_H
#define COMBOXDELEGATE_H

#include <QStyledItemDelegate>

class comboxDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    comboxDelegate(QObject *parent = 0);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const override;

    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const override;

    void updateEditorGeometry(QWidget *editor,
                              const QStyleOptionViewItem &option,
                              const QModelIndex &index) const override;

};

#endif // COMBOXDELEGATE_H
