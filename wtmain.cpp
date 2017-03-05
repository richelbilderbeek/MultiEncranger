#include <Wt/WApplication>
#include <Wt/WEnvironment>

#include "wtautoconfig.h"
#include "wttoolmultiencrangermenudialog.h"

struct WtApplication : public Wt::WApplication
{
  WtApplication(const Wt::WEnvironment& env)
    : Wt::WApplication(env),
    m_dialog(new ribi::WtMultiEncrangerMenuDialog)
  {
    this->setTitle("MultiEncranger");
    this->useStyleSheet("wt.css");
    root()->addWidget(m_dialog);
  }
  private:
  ribi::WtMultiEncrangerMenuDialog * const m_dialog;
};

Wt::WApplication *createApplication(
  const Wt::WEnvironment& env)
{
  return new WtApplication(env);
}

int main(int argc, char **argv)
{
  ribi::WtAutoConfig::SaveDefaultStylesheet();
  ribi::WtAutoConfig a(argc,argv,createApplication);
  return a.Run();
}
