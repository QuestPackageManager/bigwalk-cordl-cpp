#pragma once
// IWYU pragma private; include "Mirror/Channels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Channels)
// Forward declare root types
namespace Mirror {
class Channels;
}
// Write type traits
MARK_REF_T(::Mirror::Channels*);
DEFINE_IL2CPP_CLASS(::Mirror::Channels*, "Mirror", "Channels");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.Channels
class CORDL_TYPE Channels : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Channels() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Channels", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Channels(Channels && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Channels", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Channels(Channels const& ) = delete;

/// @brief Field Reliable offset 0xffffffff size 0x4
static constexpr int32_t  Reliable{static_cast<int32_t>(0x0)};

/// @brief Field Unreliable offset 0xffffffff size 0x4
static constexpr int32_t  Unreliable{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Channels) == 0x10, "Size mismatch!");

} // namespace end def Mirror
