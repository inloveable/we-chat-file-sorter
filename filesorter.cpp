#include "filesorter.h"



fileSorter::fileSorter(QObject*parent):QObject{parent}
{

}

void fileSorter::ecursiveAllFiles(QDir strFolder, QList<std::pair<QString,QDateTime>>& strListFile)
{
   QDir dir(strFolder);
   QFileInfoList listFileInfos = dir.entryInfoList(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);

   for(auto fileInfo:listFileInfos)
   {
       if (fileInfo.isDir())
       {
         ecursiveAllFiles(fileInfo.absoluteFilePath(), strListFile);
       }
       else
       {

           strListFile.append(std::make_pair(fileInfo.absoluteFilePath(),fileInfo.metadataChangeTime()));

       }
   }
}

void fileSorter::sort()
{
   ecursiveAllFiles(fileDir,fileMetaInfos);
   qDebug()<<fileMetaInfos;
    for(auto i:fileMetaInfos)
    {

    }
   std::sort(fileMetaInfos.begin(),fileMetaInfos.end(),
             [](std::pair<QString,QDateTime> x,
             std::pair<QString,QDateTime> y){
       return x.second>y.second;
   });
   moveFile();
   qDebug()<<fileMetaInfos;

}

void fileSorter::moveFile()
{
    //分类扩展预留

    QDate date;
    QDir newDir;
    if(1)
  {
      for(auto i:fileMetaInfos)
      {
          QString tmp=destinationDir.absolutePath();
          date=i.second.date();
          tmp+=QString("/")+date.toString("yyyy-M-d");
          newDir.setPath(tmp);
          qDebug()<<"absolute path"<<newDir.absolutePath();
          qDebug()<<"pate"<<newDir.path();
          if(newDir.exists())
          {
              QStringList tmp=i.first.split("/");
              QFile::copy(i.first,newDir.absolutePath()+QString("/")+tmp.last());
          }
          else
          {
              newDir.mkdir(newDir.absolutePath());
              QStringList tmp=i.first.split("/");
              QFile::copy(i.first,newDir.absolutePath()+QString("/")+tmp.last());
          }
      }
  }
}


