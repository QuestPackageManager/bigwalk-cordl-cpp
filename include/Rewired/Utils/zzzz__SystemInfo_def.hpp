#pragma once
// IWYU pragma private; include "Rewired/Utils/SystemInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemInfo)
// Forward declare root types
namespace Rewired::Utils {
class SystemInfo;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::SystemInfo*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::SystemInfo*, "Rewired.Utils", "SystemInfo");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.SystemInfo
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
// Declarations
/// @brief Field is64Bit, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_is64Bit, put=setStaticF_is64Bit)) bool  is64Bit;

static inline bool getStaticF_is64Bit() ;

static inline void setStaticF_is64Bit(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemInfo(SystemInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemInfo(SystemInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2909};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::SystemInfo) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
