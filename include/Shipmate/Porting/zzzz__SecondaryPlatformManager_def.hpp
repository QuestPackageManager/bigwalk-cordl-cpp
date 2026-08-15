#pragma once
// IWYU pragma private; include "Shipmate/Porting/SecondaryPlatformManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_def.hpp"
CORDL_MODULE_EXPORT(SecondaryPlatformManager)
// Forward declare root types
namespace Shipmate::Porting {
class SecondaryPlatformManager;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::SecondaryPlatformManager*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::SecondaryPlatformManager*, "Shipmate.Porting", "SecondaryPlatformManager");
// Dependencies Shipmate.Porting.AbstractPlatformManager`1<T>
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.SecondaryPlatformManager
class CORDL_TYPE SecondaryPlatformManager : public ::Shipmate::Porting::AbstractPlatformManager_1<::UnityW<::Shipmate::Porting::SecondaryPlatformManager>> {
public:
// Declarations
static inline ::Shipmate::Porting::SecondaryPlatformManager* New_ctor() ;

/// @brief Method .ctor, addr 0x181ac6c80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecondaryPlatformManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecondaryPlatformManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecondaryPlatformManager(SecondaryPlatformManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecondaryPlatformManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecondaryPlatformManager(SecondaryPlatformManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20648};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::SecondaryPlatformManager) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
