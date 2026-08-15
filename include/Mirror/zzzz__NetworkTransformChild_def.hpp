#pragma once
// IWYU pragma private; include "Mirror/NetworkTransformChild.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkTransform_def.hpp"
CORDL_MODULE_EXPORT(NetworkTransformChild)
// Forward declare root types
namespace Mirror {
class NetworkTransformChild;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkTransformChild*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkTransformChild*, "Mirror", "NetworkTransformChild");
// Dependencies Mirror.NetworkTransform
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkTransformChild
class CORDL_TYPE NetworkTransformChild : public ::Mirror::NetworkTransform {
public:
// Declarations
/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::NetworkTransformChild* New_ctor() ;

/// @brief Method .ctor, addr 0x181528700, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkTransformChild() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransformChild", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkTransformChild(NetworkTransformChild && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransformChild", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkTransformChild(NetworkTransformChild const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19247};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkTransformChild) == 0x110, "Size mismatch!");

} // namespace end def Mirror
