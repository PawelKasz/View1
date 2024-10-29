#include "dialog.h"
#include "ui_dialog.h"
#include "QGraphicsView"
#include <QGraphicsItem>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    scene = new QGraphicsScene (this);
    ui->graphicsView->setScene(scene);

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackPen(Qt::black);
    blackPen.setWidth(3);

    ellipse = scene->addEllipse(10,10,300,100,blackPen,redBrush);
    rectangle = scene->addRect(-100,-100,50,50);
    rectangle->setFlag(QGraphicsItem::ItemIsMovable);

}



Dialog::~Dialog()
{
    delete ui;
}

