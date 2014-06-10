#ifndef ZERONE_APPLICATIONMANAGER_H
#define ZERONE_APPLICATIONMANAGER_H

#include <zerone/system/ApplicationManager/IApplicationManager.h>

namespace zerone {
namespace system {

class ApplicationManager: public IApplicationManager {
public:
	virtual ~ApplicationManager();

	virtual int getApplicationInformation(const ::std::string & name);

};

}
}

#endif
