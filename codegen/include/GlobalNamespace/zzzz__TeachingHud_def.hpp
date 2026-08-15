#pragma once
// IWYU pragma private; include "GlobalNamespace/TeachingHud.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TeachingHud)
namespace GlobalNamespace {
class LocalizedText;
}
// Forward declare root types
namespace GlobalNamespace {
class TeachingHud;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeachingHud*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeachingHud*, "", "TeachingHud");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeachingHud
class CORDL_TYPE TeachingHud : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _fadeAim, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeAim, put=__cordl_internal_set__fadeAim)) float_t  _fadeAim;

/// @brief Field _fadeValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeValue, put=__cordl_internal_set__fadeValue)) float_t  _fadeValue;

/// @brief Field fadeDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeDuration, put=__cordl_internal_set_fadeDuration)) float_t  fadeDuration;

/// @brief Field localizedText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizedText, put=__cordl_internal_set_localizedText)) ::UnityW<::GlobalNamespace::LocalizedText>  localizedText;

static inline ::GlobalNamespace::TeachingHud* New_ctor() ;

/// @brief Method SetState, addr 0x180440290, size 0x1d0, virtual false, abstract: false, final false
inline void SetState(bool  isActive) ;

/// @brief Method Update, addr 0x180440460, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__fadeAim() const;

constexpr float_t& __cordl_internal_get__fadeAim() ;

constexpr float_t const& __cordl_internal_get__fadeValue() const;

constexpr float_t& __cordl_internal_get__fadeValue() ;

constexpr float_t const& __cordl_internal_get_fadeDuration() const;

constexpr float_t& __cordl_internal_get_fadeDuration() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_localizedText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_localizedText() ;

constexpr void __cordl_internal_set__fadeAim(float_t  value) ;

constexpr void __cordl_internal_set__fadeValue(float_t  value) ;

constexpr void __cordl_internal_set_fadeDuration(float_t  value) ;

constexpr void __cordl_internal_set_localizedText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeachingHud() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeachingHud", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TeachingHud(TeachingHud && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeachingHud", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeachingHud(TeachingHud const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5255};

/// @brief Field fadeDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___fadeDuration;

/// @brief Field _fadeValue, offset: 0x24, size: 0x4, def value: None
 float_t  ____fadeValue;

/// @brief Field _fadeAim, offset: 0x28, size: 0x4, def value: None
 float_t  ____fadeAim;

/// @brief Field localizedText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___localizedText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeachingHud, ___fadeDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeachingHud, ____fadeValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeachingHud, ____fadeAim) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeachingHud, ___localizedText) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeachingHud) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
