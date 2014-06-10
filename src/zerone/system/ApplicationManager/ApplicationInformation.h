#ifndef ZERONE_SYSTEM_APPLICATIONINFORMATION_H
#define ZERONE_SYSTEM_APPLICATIONINFORMATION_H

#include <zerone/system/ApplicationManager/IApplicationInformation.h>

namespace zerone {
namespace system {

class ApplicationInformation: public IApplicationInformation {
public:
	ApplicationInformation();
	virtual ~ApplicationInformation();

};

}
}

#endif
