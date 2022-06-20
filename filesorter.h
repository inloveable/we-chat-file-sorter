#ifndef FILESORTER_H
#define FILESORTER_H

#include <QObject>
#include<QFileInfo>
#include<QFile>
#include<QDir>
#include<utility>
class fileSorter:public QObject
{
public:
    Q_OBJECT
public:
    fileSorter(QObject* parent=nullptr);
    void setFileDir(QString d){fileDir.setPath(d);};
    void setdestinationDir(QString d){destinationDir.setPath(d);};
    void sort();
    void ecursiveAllFiles(QDir strFolder, QList<std::pair<QString,QDateTime>>& strListFile);
private:
    QFile file;
    QDir destinationDir;
    QDir fileDir;
    QFileInfoList informations;
    QList<std::pair<QString,QDateTime>> fileMetaInfos;

    void moveFile();

};



#endif // FILESORTER_H
