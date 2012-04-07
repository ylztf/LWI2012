////////////////////////////////////////////////////////////////////////////////
/// @file           CDeviceStructureRTDS.cpp
///
/// @author         Yaxi Liu <ylztf@mst.edu>
///                 Thomas Roth <tprfh7@mst.edu>
///
/// @compiler       C++
///
/// @project        FREEDM DGI
///
/// @description    RTDS physical device driver
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

#include "CDeviceStructureRTDS.hpp"

namespace freedm
{
namespace broker
{
namespace device
{

///////////////////////////////////////////////////////////////////////////////
/// @fn CDeviceStructureRTDS
/// @brief constructor
/// @param client The client that connects to FPGA interface
///////////////////////////////////////////////////////////////////////////////
CDeviceStructureRTDS::CDeviceStructureRTDS( CClientRTDS::RTDSPointer client )
        : m_client(client)
{
    // skip
}

///////////////////////////////////////////////////////////////////////////////
/// @fn Get( const SettingKey & )
/// @brief Returns the value of some key from readings from state table
/// @param key The key to retrieve from RTDS
/// @return The value from table
///////////////////////////////////////////////////////////////////////////////
SettingValue CDeviceStructureRTDS::Get( const SettingKey & key )
{
    return m_client->Get(GetDevice(), key);
}

///////////////////////////////////////////////////////////////////////////////
/// @fn Set( const SettingKey &, const SettingValue & )
/// @brief Sets the value of some key to a new value in the command table
/// @param key The key to change.
/// @param value The value to set the key to.
///////////////////////////////////////////////////////////////////////////////
void CDeviceStructureRTDS::Set( const SettingKey & key, const SettingValue & value )
{
    m_client->Set(GetDevice(), key, value);
}

} // namespace device
} // namespace broker
} // namespace freedm
