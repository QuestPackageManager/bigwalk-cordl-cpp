#pragma once
// IWYU pragma private; include "GlobalNamespace/BoringSpinner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoringSpinner)
// Forward declare root types
namespace GlobalNamespace {
class BoringSpinner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BoringSpinner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoringSpinner*, "", "BoringSpinner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BoringSpinner
class CORDL_TYPE BoringSpinner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field speed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

static inline ::GlobalNamespace::BoringSpinner* New_ctor() ;

/// @brief Method Update, addr 0x1803f7c00, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoringSpinner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoringSpinner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoringSpinner(BoringSpinner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoringSpinner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoringSpinner(BoringSpinner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5026};

/// @brief Field speed, offset: 0x20, size: 0x4, def value: None
 float_t  ___speed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoringSpinner, ___speed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoringSpinner) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
