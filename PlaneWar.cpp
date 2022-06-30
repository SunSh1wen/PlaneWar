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
    //设置窗口尺寸
    setFixedSize(GameWidth, GameHeight);
    //设置标题
    setWindowTitle(GameTitle);
    //加载图标
    setWindowIcon(QIcon(":/PlaneWar/resource/app.ico"));
}