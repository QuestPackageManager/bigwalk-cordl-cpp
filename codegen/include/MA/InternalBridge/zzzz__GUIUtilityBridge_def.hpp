#pragma once
// IWYU pragma private; include "MA/InternalBridge/GUIUtilityBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GUIUtilityBridge)
// Forward declare root types
namespace MA::InternalBridge {
class GUIUtilityBridge;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::GUIUtilityBridge*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::GUIUtilityBridge*, "MA.InternalBridge", "GUIUtilityBridge");
// Dependencies System.Object
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.GUIUtilityBridge
class CORDL_TYPE GUIUtilityBridge : public ::System::Object {
public:
// Declarations
/// @brief Method GetPermanentControlID, addr 0x181ecc380, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetPermanentControlID() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIUtilityBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIUtilityBridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIUtilityBridge(GUIUtilityBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIUtilityBridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIUtilityBridge(GUIUtilityBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21111};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::GUIUtilityBridge) == 0x10, "Size mismatch!");

} // namespace end def MA::InternalBridge
