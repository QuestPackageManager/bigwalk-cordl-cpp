#pragma once
// IWYU pragma private; include "Shipmate/Porting/PlatformManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_def.hpp"
CORDL_MODULE_EXPORT(PlatformManager)
// Forward declare root types
namespace Shipmate::Porting {
class PlatformManager;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::PlatformManager*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::PlatformManager*, "Shipmate.Porting", "PlatformManager");
// Dependencies Shipmate.Porting.AbstractPlatformManager`1<T>
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.PlatformManager
class CORDL_TYPE PlatformManager : public ::Shipmate::Porting::AbstractPlatformManager_1<::UnityW<::Shipmate::Porting::PlatformManager>> {
public:
// Declarations
static inline ::Shipmate::Porting::PlatformManager* New_ctor() ;

/// @brief Method .ctor, addr 0x181ac6c80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformManager(PlatformManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformManager(PlatformManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20647};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::PlatformManager) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
