#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseMath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HouseMath)
// Forward declare root types
namespace GlobalNamespace {
class HouseMath;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HouseMath*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseMath*, "", "HouseMath");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseMath
class CORDL_TYPE HouseMath : public ::System::Object {
public:
// Declarations
/// @brief Method SmoothDamp01, addr 0x1803eb100, size 0xf0, virtual false, abstract: false, final false
static inline float_t SmoothDamp01(float_t  current, float_t  target, ::by_ref<float_t>  currentVelocity, float_t  smoothTime, float_t  snapThreshold, ::by_ref<bool>  changed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseMath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseMath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseMath(HouseMath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseMath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseMath(HouseMath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4944};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HouseMath) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
