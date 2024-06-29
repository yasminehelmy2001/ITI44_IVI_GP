#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
/* Time & Date inclusions */
#include <QTimer>
#include <QDate>
#include <QTime>

/* Media inclusions */
#include <QIcon>

/* Music inclusions */
#include <QFile>
#include <QTextStream>
#include <QListWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QDirIterator>
#include <QDir>
#include <QUrl>

/* MP4 inclusions */
#include <QRectF>
#include <QGraphicsScene>
#include <QGraphicsVideoItem>

/* Air conditioner inclusion */
#include <QLabel>
#include <QSlider>
#include <QLineEdit>
#include <QString>


#include <unistd.h>
#include <bits/stdc++.h>
#include <regex>

#include <iostream>
using namespace std;
#include <typeinfo>
#include <QDebug>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QTimer *timer;

    QTimer *flashDetectionTimer;

    QTimer * bluetoothDetectionTimer;

    QDate currentDate;
    QString date;
    QTime currentTime;
    QString time;

    QMediaPlaylist *playList = new QMediaPlaylist;
    QMediaPlayer *musicPlayer = new QMediaPlayer;

    QMediaPlayer *videoPlayer = new QMediaPlayer;
    QMediaPlaylist *videoPlayList = new QMediaPlaylist;
    QGraphicsScene *videoScene = new QGraphicsScene;
    QGraphicsVideoItem *videoGraphicsItem = new QGraphicsVideoItem;

    ~MainWindow();
private slots:

    void on_videoButton_clicked();

    void on_musicButton_clicked();
    void on_settingsButton_clicked();

    void on_themeComboBox_currentIndexChanged(int index);

    void updateTime();


    void goBackHome();

    void updateFlashStatus();

    void updateSongsList();

    void on_playButton_clicked();

    void on_forwardButton_clicked();

    void on_backwardButton_clicked();

    void on_repeatButton_clicked();

    void on_shuffleButton_clicked();

    void on_stopButton_clicked();

    void playSong();

    void playToggle();

    void onSongListItemClicked(QListWidgetItem* item);

    void onSongChange();

    void on_volumeDownButton_clicked();

    void on_volumeUpButton_clicked();



    void updateVideosList();

    void on_goTovideosListButton_clicked();

    void onVideoListItemClicked(QListWidgetItem* item);

    void on_backwardVideoButton_clicked();

    void on_forwardVideoButton_clicked();

    void on_playVideoButton_clicked();

    void on_stopVideoButton_clicked();

    void on_volumeDownVideoButton_clicked();

    void on_volumeUpVideoButton_clicked();

    void playVideo();

    void stopVideo();
    void on_setTimeDateButton_clicked();

    void on_doneTimeDateButton_clicked();

    void on_cancelTimeDateButton_clicked();
    void handleButtonPress(int buttonIndex);
    void handleSliderMoved(int value);


    void on_acButton_clicked();

    void on_calcButton_clicked();
    void onDigitClicked();
    void onOperatorClicked();
    void onEqualsClicked();
    void onClearClicked();

    void on_calendarWidget_selectionChanged();

    void on_calendarButton_clicked();

    void enableBluetooth();
    void on_bluetoothButton_clicked();
    void updatBluetoothDevices();



private:
    Ui::MainWindow *ui;

  //  QNetworkAccessManager *networkManager;
    //QString apiKey;
   // QString city;
    void applyTheme(int index);
    QLabel *ledLabels[5];
    QSlider *slider;
    QLabel *valueLabel;
    double firstOperand;
    double secondOperand;
    QString pendingOperator;
    bool waitingForSecondOperand;


};
#endif // MAINWINDOW_H
