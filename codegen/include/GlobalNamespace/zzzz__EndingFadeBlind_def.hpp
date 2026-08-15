#pragma once
// IWYU pragma private; include "GlobalNamespace/EndingFadeBlind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EndingFadeBlind)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace GlobalNamespace {
class EndingFadeBlind;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EndingFadeBlind*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EndingFadeBlind*, "", "EndingFadeBlind");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EndingFadeBlind
class CORDL_TYPE EndingFadeBlind : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::EndingFadeBlind>  Instance;

/// @brief Field canvas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvas, put=__cordl_internal_set_canvas)) ::UnityW<::UnityEngine::Canvas>  canvas;

/// @brief Field fadeImage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeImage, put=__cordl_internal_set_fadeImage)) ::UnityW<::UnityEngine::UI::Image>  fadeImage;

/// @brief Method Awake, addr 0x180420db0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::EndingFadeBlind* New_ctor() ;

/// @brief Method SetFade, addr 0x180420de0, size 0x220, virtual false, abstract: false, final false
static inline void SetFade(float_t  fade01) ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_canvas() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_fadeImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_fadeImage() ;

constexpr void __cordl_internal_set_canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set_fadeImage(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::EndingFadeBlind> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::EndingFadeBlind>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EndingFadeBlind() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EndingFadeBlind", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EndingFadeBlind(EndingFadeBlind && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndingFadeBlind", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndingFadeBlind(EndingFadeBlind const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5220};

/// @brief Field canvas, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ___canvas;

/// @brief Field fadeImage, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___fadeImage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EndingFadeBlind, ___canvas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingFadeBlind, ___fadeImage) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EndingFadeBlind) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
