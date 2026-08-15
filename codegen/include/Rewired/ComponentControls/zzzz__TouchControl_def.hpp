#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/zzzz__CustomControllerControl_def.hpp"
CORDL_MODULE_EXPORT(TouchControl)
namespace Rewired::ComponentControls {
class IComponentController;
}
namespace Rewired::ComponentControls {
class TouchController;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Rewired::ComponentControls {
class TouchControl;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::TouchControl*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchControl*, "Rewired.ComponentControls", "TouchControl");
// Dependencies Rewired.ComponentControls.CustomControllerControl
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchControl
class CORDL_TYPE TouchControl : public ::Rewired::ComponentControls::CustomControllerControl {
public:
// Declarations
 __declspec(property(get=VZfaeuoxqtaXXocbdRCampVInuFY)) ::UnityW<::UnityEngine::RectTransform>  GresrMEVcbMhVAlBQCOHKExbEgkIA;

/// @brief Field __rectTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___rectTransform, put=__cordl_internal_set___rectTransform)) ::UnityW<::UnityEngine::RectTransform>  __rectTransform;

/// @brief Field _canvas, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvas, put=__cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas>  _canvas;

 __declspec(property(get=VGNBIvDnVMTTlVbiwEVGrQlUDvHQ)) bool  jHlJjYGsjvLRJcifXdJpmcbxDfQO;

 __declspec(property(get=iqwMZwjKUiiMhBwwEOJDJLAsYGEd)) ::UnityW<::UnityEngine::RectTransform>  lpFDAAPMaXcvliOKygZcLXMGfpty;

 __declspec(property(get=jDQyUAvwWnmVeORubdxIMLIiNmpM)) ::UnityW<::Rewired::ComponentControls::TouchController>  oIVqhSBNxfacZBkEzCfVmIEVVdvt;

 __declspec(property(get=DWQWISBuqIPRXvsMrcDqbZIOFsIt)) ::UnityW<::UnityEngine::Canvas>  umfFlLFZxtBINUPHmhrOnUNAfzaRA;

/// @brief Method DWQWISBuqIPRXvsMrcDqbZIOFsIt, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Canvas> DWQWISBuqIPRXvsMrcDqbZIOFsIt() ;

/// @brief Method FindController, addr 0x1818d6f30, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::ComponentControls::IComponentController* FindController() ;

/// @brief Method GetRequiredControllerType, addr 0x1818e5220, size 0x10, virtual true, abstract: false, final false
inline ::System::Type* GetRequiredControllerType() ;

static inline ::Rewired::ComponentControls::TouchControl* New_ctor() ;

/// @brief Method OnCanvasGroupChanged, addr 0x1818e5230, size 0x90, virtual true, abstract: false, final false
inline void OnCanvasGroupChanged() ;

/// @brief Method OnTransformParentChanged, addr 0x1818e5230, size 0x90, virtual true, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method OnValidate, addr 0x1818e52c0, size 0x90, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method VGNBIvDnVMTTlVbiwEVGrQlUDvHQ, addr 0x1818e5350, size 0x30, virtual true, abstract: false, final false
inline bool VGNBIvDnVMTTlVbiwEVGrQlUDvHQ() ;

/// @brief Method VZfaeuoxqtaXXocbdRCampVInuFY, addr 0x1818e5380, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> VZfaeuoxqtaXXocbdRCampVInuFY() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get___rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get___rectTransform() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas() ;

constexpr void __cordl_internal_set___rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value) ;

/// @brief Method .ctor, addr 0x1818d68c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method iECBLEvwLVzdUeetlngFtHkGxIXg, addr 0x1818e53d0, size 0xb0, virtual true, abstract: false, final false
inline void iECBLEvwLVzdUeetlngFtHkGxIXg() ;

/// @brief Method iqwMZwjKUiiMhBwwEOJDJLAsYGEd, addr 0x1818e5480, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> iqwMZwjKUiiMhBwwEOJDJLAsYGEd() ;

/// @brief Method jDQyUAvwWnmVeORubdxIMLIiNmpM, addr 0x1818e54e0, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::ComponentControls::TouchController> jDQyUAvwWnmVeORubdxIMLIiNmpM() ;

/// @brief Method mETlJiYTzunZULNcmeovJeovtWON, addr 0x1818e5500, size 0xc0, virtual false, abstract: false, final false
inline bool mETlJiYTzunZULNcmeovJeovtWON(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method mrfjlDSnCGEnRdHcMsohbTscucbjA, addr 0x1818e55c0, size 0xd0, virtual true, abstract: false, final false
inline bool mrfjlDSnCGEnRdHcMsohbTscucbjA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchControl(TouchControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchControl(TouchControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2755};

/// @brief Field _canvas, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ____canvas;

/// @brief Field __rectTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  _____rectTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchControl, ____canvas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchControl, _____rectTransform) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchControl) == 0x40, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
