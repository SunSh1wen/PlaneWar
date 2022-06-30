#include "PlaneWar.h"
#include "config.h"


PlaneWar::PlaneWar(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    initScene();
}
void PlaneWar::initScene()
{
    //���ô��ڳߴ�
    setFixedSize(GameWidth, GameHeight);
    //���ñ���
    setWindowTitle(GameTitle);
    //����ͼ��
    setWindowIcon(QIcon(":/PlaneWar/resource/app.ico"));
}