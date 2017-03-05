#ifndef WTMULTIENCRANGERDIALOG_H
#define WTMULTIENCRANGERDIALOG_H

#include <boost/scoped_ptr.hpp>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>

namespace ribi {

struct ToolMultiEncrangerMainDialog;

struct WtMultiEncrangerMainDialog : public Wt::WContainerWidget
{
  WtMultiEncrangerMainDialog();
  WtMultiEncrangerMainDialog(const WtMultiEncrangerMainDialog&) = delete;
  WtMultiEncrangerMainDialog& operator=(const WtMultiEncrangerMainDialog&) = delete;

  private:
  boost::scoped_ptr<ToolMultiEncrangerMainDialog> m_dialog;
  Wt::WLineEdit * m_edit_encrypted_text;
  Wt::WLineEdit * m_edit_key;
  Wt::WLineEdit * m_edit_plain_text;

  void OnDeencryptClick();
  void OnEncryptClick();
  void ShowMain();
};

} //~namespace ribi

#endif // WTMULTIENCRANGERDIALOG_H
