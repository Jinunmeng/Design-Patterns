#include "mainwindow.h"
#include <QApplication>
#include <QTableView>
#include "tablemodel.h"
#include "mytableview.h"
#include "comboxdelegate.h"
#include <QStandardItemModel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
   // w.show();

   // MyTableView tableview;
   // TableModel tmodel(0);

    QStandardItemModel tmodel(4, 2);
    QTableView tableview;
    comboxDelegate cdelegate;
    tableview.setModel(&tmodel);
    tableview.setItemDelegate(&cdelegate);
    tableview.show();


    return a.exec();
}
