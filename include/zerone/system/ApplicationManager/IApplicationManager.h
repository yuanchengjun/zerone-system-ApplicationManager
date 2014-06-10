#ifndef ZERONE_SYSTEM_I_APPLICATION_MANAGER_H
#define ZERONE_SYSTEM_I_APPLICATION_MANAGER_H

#include <zerone/system/ApplicationManager/IApplicationInformation.h>

#include <string>

namespace zerone {
namespace system {

class IApplicationManager {
public:
	virtual ~IApplicationManager() {
	}

	virtual int getApplicationInformation(const ::std::string & name) = 0;

};

}
}

#endif
