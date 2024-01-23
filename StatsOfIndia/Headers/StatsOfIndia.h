#pragma once

#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QTableView>

#include "OpenGLWindow.h"
#include "StatsDataReader.h"

class StatsOfIndia : public QMainWindow
{
    Q_OBJECT

public:
    static StatsOfIndia& getInstance(QWidget* parent = nullptr);
    ~StatsOfIndia();

private:
    StatsOfIndia(QWidget *parent = nullptr);
    void setupUi();
    void setupTableModel(const QStringList& stateNames, const QList<long>& stateValues);
    void handleComboBoxChange(int index);

private:
    QWidget* mCentralWidget;
    QWidget* mGridLayoutWidget;
    QGridLayout* mGridLayout;
    QVBoxLayout* mVerticalLayout;
    QHBoxLayout* mHorizontalLayout;
    QHBoxLayout* mHorizontalLayout1;
    QLabel* mLabel;
    QDateEdit* mDateEdit;
    OpenGLWindow* mOpenGLWidget;
    QTableView* mTableView;
    QPushButton* mPushButton;
    QComboBox* mComboBox;

    QVector<GLfloat> mVertices;
    QVector<GLfloat> mColors;

    std::vector<std::string> stateNames;
    std::vector <RegionInfo1> regions1;

    static StatsOfIndia* instance;
};
