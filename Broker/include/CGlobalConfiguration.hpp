///////////////////////////////////////////////////////////////////////////////
/// @file      CGlobalConfiguration.hpp
///
/// @author    Stephen Jackson <scj7t4@mst.edu>
///
/// @compiler  C++
///
/// @project   FREEDM DGI
///
/// @description Tracks some global configuration options that need to be
///              referenced by various classes
///
/// [1] Frank Buschmann, Regine Meunier, Hans Rohnert, Peter Sommerlad,
///    and Michael Stal. Pattern-Oriented Software Architecture Volume 1: A
///    System of Patterns. Wiley, 1 edition, August 1996.
///
/// [2] Boost.Asio Examples
///    <http://www.boost.org/doc/libs/1_41_0/doc/html/boost_asio/examples.html>
///
/// @license
/// These source code files were created at as part of the
/// FREEDM DGI Subthrust, and are
/// intended for use in teaching or research.  They may be 
/// freely copied, modified and redistributed as long
/// as modified versions are clearly marked as such and
/// this notice is not removed.
/// 
/// Neither the authors nor the FREEDM Project nor the
/// National Science Foundation
/// make any warranty, express or implied, nor assumes
/// any legal responsibility for the accuracy,
/// completeness or usefulness of these codes or any
/// information distributed with these codes.
///
/// Suggested modifications or questions about these codes 
/// can be directed to Dr. Bruce McMillin, Department of 
/// Computer Science, Missour University of Science and
/// Technology, Rolla, MO  65409 (ff@mst.edu).
///
///////////////////////////////////////////////////////////////////////////////

#ifndef CGLOBALCONFIGURATION_HPP
#define CGLOBALCONFIGURATION_HPP

#include <string>

#include "Utility.hpp"

namespace freedm {

/// A singleton class which tracks commonly used configuration options.
class CGlobalConfiguration : public Templates::Singleton<CGlobalConfiguration>
{
    public:
        /// Initialize the global configuration
        CGlobalConfiguration() { };
        /// Set the hostname
        void SetHostname(std::string h) { m_hostname = h; };
        /// Set the port
        void SetListenPort(std::string p) { m_port = p; };
        /// Set the uuid
        void SetUUID(std::string u) { m_uuid = u; };
        /// Set the address to on
        void SetListenAddress(std::string a) { m_address = a; };
        /// Get the hostname
        std::string GetHostname() { return m_hostname; };
        /// Get the port
        std::string GetListenPort() { return m_port; };
        /// Get the UUID
        std::string GetUUID() { return m_uuid; };
        /// Get the address
        std::string GetListenAddress() { return m_address; };
    private:
        std::string m_hostname; /// Node hostname
        std::string m_port; /// Port number
        std::string m_uuid; /// The node uuid
        std::string m_address; /// The listening address.
};

} // namespace freedm

#endif
