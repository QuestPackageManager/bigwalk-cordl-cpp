#pragma once
// IWYU pragma private; include "Steamworks/DllCheck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DllCheck)
// Forward declare root types
namespace Steamworks {
class DllCheck;
}
// Write type traits
MARK_REF_T(::Steamworks::DllCheck*);
DEFINE_IL2CPP_CLASS(::Steamworks::DllCheck*, "Steamworks", "DllCheck");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.DllCheck
class CORDL_TYPE DllCheck : public ::System::Object {
public:
// Declarations
static inline ::Steamworks::DllCheck* New_ctor() ;

/// @brief Method Test, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
static inline bool Test() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DllCheck() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DllCheck", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DllCheck(DllCheck && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DllCheck", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DllCheck(DllCheck const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16016};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::DllCheck) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
