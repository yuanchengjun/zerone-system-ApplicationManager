#include <zerone/system/ApplicationManager/IApplicationManager.h>

#include <zerone/common/service/TService.h>

#include "zerone/system/ApplicationManager/ApplicationManager.h"

using namespace ::zerone::common;
using namespace ::zerone::system;

int main() {
	ApplicationManager appmgr;
	TService service;
	service.bind("getApplicationInformation", &IApplicationManager::getApplicationInformation, appmgr);
	return 0;
}
