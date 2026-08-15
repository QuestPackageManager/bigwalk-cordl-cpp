#pragma once
// IWYU pragma private; include "GlobalNamespace/Slower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Slower)
// Forward declare root types
namespace GlobalNamespace {
class Slower;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Slower*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Slower*, "", "Slower");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Slower
class CORDL_TYPE Slower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field millisecondsPerFrame, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_millisecondsPerFrame, put=__cordl_internal_set_millisecondsPerFrame)) int32_t  millisecondsPerFrame;

static inline ::GlobalNamespace::Slower* New_ctor() ;

/// @brief Method Update, addr 0x1803f0500, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_millisecondsPerFrame() const;

constexpr int32_t& __cordl_internal_get_millisecondsPerFrame() ;

constexpr void __cordl_internal_set_millisecondsPerFrame(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Slower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Slower", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Slower(Slower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Slower", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Slower(Slower const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4917};

/// @brief Field millisecondsPerFrame, offset: 0x20, size: 0x4, def value: None
 int32_t  ___millisecondsPerFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Slower, ___millisecondsPerFrame) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Slower) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
