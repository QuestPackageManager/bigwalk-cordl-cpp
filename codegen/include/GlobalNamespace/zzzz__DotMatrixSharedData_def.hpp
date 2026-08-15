#pragma once
// IWYU pragma private; include "GlobalNamespace/DotMatrixSharedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DotMatrixSharedData)
// Forward declare root types
namespace GlobalNamespace {
class DotMatrixSharedData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DotMatrixSharedData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DotMatrixSharedData*, "", "DotMatrixSharedData");
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: DotMatrixSharedData
class CORDL_TYPE DotMatrixSharedData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field animationDuration, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationDuration, put=__cordl_internal_set_animationDuration)) float_t  animationDuration;

/// @brief Field failureLeft, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_failureLeft, put=__cordl_internal_set_failureLeft)) ::UnityEngine::Color  failureLeft;

/// @brief Field failureRight, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get_failureRight, put=__cordl_internal_set_failureRight)) ::UnityEngine::Color  failureRight;

/// @brief Field standardLeft, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_standardLeft, put=__cordl_internal_set_standardLeft)) ::UnityEngine::Color  standardLeft;

/// @brief Field standardRight, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_standardRight, put=__cordl_internal_set_standardRight)) ::UnityEngine::Color  standardRight;

/// @brief Field sucessLeft, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_sucessLeft, put=__cordl_internal_set_sucessLeft)) ::UnityEngine::Color  sucessLeft;

/// @brief Field sucessRight, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get_sucessRight, put=__cordl_internal_set_sucessRight)) ::UnityEngine::Color  sucessRight;

static inline ::GlobalNamespace::DotMatrixSharedData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_animationDuration() const;

constexpr float_t& __cordl_internal_get_animationDuration() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_failureLeft() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_failureLeft() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_failureRight() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_failureRight() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_standardLeft() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_standardLeft() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_standardRight() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_standardRight() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_sucessLeft() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_sucessLeft() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_sucessRight() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_sucessRight() ;

constexpr void __cordl_internal_set_animationDuration(float_t  value) ;

constexpr void __cordl_internal_set_failureLeft(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_failureRight(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_standardLeft(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_standardRight(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_sucessLeft(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_sucessRight(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DotMatrixSharedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DotMatrixSharedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DotMatrixSharedData(DotMatrixSharedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DotMatrixSharedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DotMatrixSharedData(DotMatrixSharedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5044};

/// @brief Field animationDuration, offset: 0x18, size: 0x4, def value: None
 float_t  ___animationDuration;

/// @brief Field standardLeft, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Color  ___standardLeft;

/// @brief Field standardRight, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ___standardRight;

/// @brief Field sucessLeft, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ___sucessLeft;

/// @brief Field sucessRight, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Color  ___sucessRight;

/// @brief Field failureLeft, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Color  ___failureLeft;

/// @brief Field failureRight, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Color  ___failureRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DotMatrixSharedData, ___animationDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DotMatrixSharedData, ___standardLeft) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DotMatrixSharedData, ___standardRight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DotMatrixSharedData, ___sucessLeft) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DotMatrixSharedData, ___sucessRight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DotMatrixSharedData, ___failureLeft) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DotMatrixSharedData, ___failureRight) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DotMatrixSharedData) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
