#ifndef GRR_CLIENT_MINICOMM_CLIENT_ACTIONS_ENUMERATE_PROCESS_MODULES_H_
#define GRR_CLIENT_MINICOMM_CLIENT_ACTIONS_ENUMERATE_PROCESS_MODULES_H_

#include <ifaddrs.h>

#include <map>

#include "gtest/gtest_prod.h"
#include "grr/client/minicomm/client_action.h"

namespace grr {
namespace actions {

class EnumerateProcessModules : public ClientAction {
 public:
  EnumerateProcessModules() {}
  void ProcessRequest(ActionContext* args) override;

 private:
  // Map from interface name to interface information.
  typedef std::map<std::string, Interface> InterfaceMap;

 private:
  bool PopulateProcessInfo(const std::string& procDir, Process* res,
                           std::string* error);
};
}  // namespace actions
}  // namespace grr
#endif  // GRR_CLIENT_MINICOMM_CLIENT_ACTIONS_ENUMERATE_INTERFACES_H_
