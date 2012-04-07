////////////////////////////////////////////////////////////////////////////////
/// @file           IDeviceLWI.hpp
///
/// @author         Yaxi Liu <ylztf@mst.edu>
///                 Thomas Roth <tprfh7@mst.edu>
///
/// @project        FREEDM DGI
///
/// @description    Physical devices for the LWI project
///
/// These source code files were created at the Missouri University of Science
/// and Technology, and are intended for use in teaching or research. They may
/// be freely copied, modified and redistributed as long as modified versions
/// are clearly marked as such and this notice is not removed.
///
/// Neither the authors nor Missouri S&T make any warranty, express or implied,
/// nor assume any legal responsibility for the accuracy, completeness or
/// usefulness of these files or any information distributed with these files.
///
/// Suggested modifications or questions about these files can be directed to
/// Dr. Bruce McMillin, Department of Computer Science, Missouri University of
/// Science and Technology, Rolla, MO 65409 <ff@mst.edu>.
////////////////////////////////////////////////////////////////////////////////

#ifndef C_DEVICE_LWI_HPP
#define C_DEVICE_LWI_HPP

#include <boost/shared_ptr.hpp>

#include "CDeviceDRER.hpp"
#include "CDeviceDESD.hpp"
#include "CDeviceLOAD.hpp"

namespace freedm
{
namespace broker
{

// forward declaration of device manager
class CPhysicalDeviceManager;

namespace device
{

/// Common implementation of LWI devices
class IDeviceLWI
: public virtual IDevice
{
public:
    /// Convenience type for a shared pointer to self
    typedef boost::shared_ptr<IDeviceLWI> DevicePtr;

    /// Activate the device
    void turnOn();

    /// Deactivate the device
    void turnOff();

    /// Get the device power (positive indicates discharge)
    SettingValue get_powerLevel();

protected:
    /// Constructor which takes a manager, identifier, and internal structure
    IDeviceLWI(CPhysicalDeviceManager & manager, Identifier device,
            IDeviceStructure::DevicePtr structure)
    : IDevice(manager, device, structure) { }

    /// Virtual destructor for derived classes
    virtual ~IDeviceLWI() { }

};

} // namespace device
} // namespace broker
} // namespace freedm

#endif // C_DEVICE_LWI_HPP
