#pragma once
// IWYU pragma private; include "GlobalNamespace/IOccasional.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOccasional)
// Forward declare root types
namespace GlobalNamespace {
class IOccasional;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IOccasional*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IOccasional*, "", "IOccasional");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IOccasional
class CORDL_TYPE IOccasional {
public:
// Declarations
/// @brief Method OccasionalUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OccasionalUpdate() ;

// Ctor Parameters [CppParam { name: "", ty: "IOccasional", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOccasional(IOccasional const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4953};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
