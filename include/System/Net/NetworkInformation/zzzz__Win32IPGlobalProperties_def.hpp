#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32IPGlobalProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Win32IPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class Win32IPGlobalProperties;
}
// Write type traits
MARK_REF_T(::System::Net::NetworkInformation::Win32IPGlobalProperties*);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::Win32IPGlobalProperties*, "System.Net.NetworkInformation", "Win32IPGlobalProperties");
// Dependencies System.Net.NetworkInformation.IPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.Win32IPGlobalProperties
class CORDL_TYPE Win32IPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties {
public:
// Declarations
 __declspec(property(get=get_DomainName)) ::StringW  DomainName;

static inline ::System::Net::NetworkInformation::Win32IPGlobalProperties* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DomainName, addr 0x181dab420, size 0x30, virtual true, abstract: false, final false
inline ::StringW get_DomainName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Win32IPGlobalProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Win32IPGlobalProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Win32IPGlobalProperties(Win32IPGlobalProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Win32IPGlobalProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Win32IPGlobalProperties(Win32IPGlobalProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12061};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NetworkInformation::Win32IPGlobalProperties) == 0x10, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
