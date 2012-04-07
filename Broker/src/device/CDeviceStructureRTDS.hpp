////////////////////////////////////////////////////////////////////////////////
/// @file           CDeviceStructureRTDS.hpp
///
/// @author         Yaxi Liu <ylztf@mst.edu>
///                 Thomas Roth <tprfh7@mst.edu>
///
/// @compiler       C++
///
/// @project        FREEDM DGI
///
/// @description    PSCAD physical device driver
///
/// @license
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
/// Science and Technology, Rolla, MO 65401 <ff@mst.edu>.
////////////////////////////////////////////////////////////////////////////////

#ifndef C_DEVICE_STRUCTURE_RTDS_HPP
#define C_DEVICE_STRUCTURE_RTDS_HPP

#include <boost/lexical_cast.hpp>

#include "IPhysicalDevice.hpp"
#include "CClientRTDS.hpp"

namespace freedm
{
namespace broker
{
namespace device
{


/// this class will provide RTDS specific get and set functions
class CDeviceStructureRTDS
        : public IDeviceStructure
{
    public:
        /// constructor which takes a RTDS client
        CDeviceStructureRTDS( CClientRTDS::RTDSPointer client );
        
        /// Gets the setting of some key from state table
        virtual SettingValue Get( const SettingKey & key );
        
        /// Sets the value of some key in the command table
        virtual void Set( const SettingKey & key, const SettingValue & value );
        
        //
    private:
        /// Simulation RTDS client
        CClientRTDS::RTDSPointer m_client;
};

} // namespace device
} // namespace broker
} // namespace freedm

#endif // C_DEVICE_STRUCTURE_RTDS_HPP
