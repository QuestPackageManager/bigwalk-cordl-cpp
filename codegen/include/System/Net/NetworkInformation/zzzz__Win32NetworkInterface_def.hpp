#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32NetworkInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__Win32_FIXED_INFO_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Win32NetworkInterface)
namespace System::Net::NetworkInformation {
struct Win32_FIXED_INFO;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class Win32NetworkInterface;
}
// Write type traits
MARK_REF_T(::System::Net::NetworkInformation::Win32NetworkInterface*);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::Win32NetworkInterface*, "System.Net.NetworkInformation", "Win32NetworkInterface");
// Dependencies System.Net.NetworkInformation.Win32_FIXED_INFO, System.Object
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.Win32NetworkInterface
class CORDL_TYPE Win32NetworkInterface : public ::System::Object {
public:
// Declarations
/// @brief Field fixedInfo, offset 0xffffffff, size 0x58 
 __declspec(property(get=getStaticF_fixedInfo, put=setStaticF_fixedInfo)) ::System::Net::NetworkInformation::Win32_FIXED_INFO  fixedInfo;

/// @brief Field initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_initialized, put=setStaticF_initialized)) bool  initialized;

/// @brief Method GetNetworkParams, addr 0x181dab450, size 0x90, virtual false, abstract: false, final false
static inline int32_t GetNetworkParams(::System::IntPtr  ptr, ::by_ref<int32_t>  size) ;

/// @brief Method MultiByteToWideChar, addr 0x181dab4e0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t MultiByteToWideChar(uint32_t  CodePage, uint32_t  dwFlags, uint8_t*  lpMultiByteStr, int32_t  cbMultiByte, char16_t*  lpWideCharStr, int32_t  cchWideChar) ;

/// @brief Method <get_FixedInfo>g__GetStringFromMultiByte|5_0, addr 0x181dab5b0, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW _get_FixedInfo_g__GetStringFromMultiByte_5_0(uint8_t*  bytes) ;

static inline ::System::Net::NetworkInformation::Win32_FIXED_INFO getStaticF_fixedInfo() ;

static inline bool getStaticF_initialized() ;

/// @brief Method get_FixedInfo, addr 0x181dab680, size 0xb20, virtual false, abstract: false, final false
static inline ::System::Net::NetworkInformation::Win32_FIXED_INFO get_FixedInfo() ;

static inline void setStaticF_fixedInfo(::System::Net::NetworkInformation::Win32_FIXED_INFO  value) ;

static inline void setStaticF_initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Win32NetworkInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Win32NetworkInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Win32NetworkInterface(Win32NetworkInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Win32NetworkInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Win32NetworkInterface(Win32NetworkInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12063};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NetworkInformation::Win32NetworkInterface) == 0x10, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
