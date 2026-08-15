#pragma once
// IWYU pragma private; include "Graphy/Runtime/UI/G_SafeArea.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
CORDL_MODULE_EXPORT(G_SafeArea)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace Graphy::Runtime::UI {
class G_SafeArea;
}
// Write type traits
MARK_REF_T(::Graphy::Runtime::UI::G_SafeArea*);
DEFINE_IL2CPP_CLASS(::Graphy::Runtime::UI::G_SafeArea*, "Graphy.Runtime.UI", "G_SafeArea");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rect
namespace Graphy::Runtime::UI {
// Is value type: false
// CS Name: Graphy.Runtime.UI.G_SafeArea
class CORDL_TYPE G_SafeArea : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_conformX, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_conformX, put=__cordl_internal_set_m_conformX)) bool  m_conformX;

/// @brief Field m_conformY, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_conformY, put=__cordl_internal_set_m_conformY)) bool  m_conformY;

/// @brief Field m_lastSafeArea, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_lastSafeArea, put=__cordl_internal_set_m_lastSafeArea)) ::UnityEngine::Rect  m_lastSafeArea;

/// @brief Field m_rectTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rectTransform, put=__cordl_internal_set_m_rectTransform)) ::UnityW<::UnityEngine::RectTransform>  m_rectTransform;

/// @brief Method ApplySafeArea, addr 0x181e538e0, size 0x130, virtual false, abstract: false, final false
inline void ApplySafeArea(::UnityEngine::Rect  r) ;

/// @brief Method Awake, addr 0x181e53a10, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Graphy::Runtime::UI::G_SafeArea* New_ctor() ;

/// @brief Method Refresh, addr 0x181e53a50, size 0x1b0, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method Update, addr 0x181e53c00, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_m_conformX() const;

constexpr bool& __cordl_internal_get_m_conformX() ;

constexpr bool const& __cordl_internal_get_m_conformY() const;

constexpr bool& __cordl_internal_get_m_conformY() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_lastSafeArea() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_m_lastSafeArea() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_rectTransform() ;

constexpr void __cordl_internal_set_m_conformX(bool  value) ;

constexpr void __cordl_internal_set_m_conformY(bool  value) ;

constexpr void __cordl_internal_set_m_lastSafeArea(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x181e53c10, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr G_SafeArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "G_SafeArea", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
G_SafeArea(G_SafeArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "G_SafeArea", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
G_SafeArea(G_SafeArea const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20269};

/// @brief Field m_conformX, offset: 0x20, size: 0x1, def value: None
 bool  ___m_conformX;

/// @brief Field m_conformY, offset: 0x21, size: 0x1, def value: None
 bool  ___m_conformY;

/// @brief Field m_rectTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___m_rectTransform;

/// @brief Field m_lastSafeArea, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Rect  ___m_lastSafeArea;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Graphy::Runtime::UI::G_SafeArea, ___m_conformX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Graphy::Runtime::UI::G_SafeArea, ___m_conformY) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Graphy::Runtime::UI::G_SafeArea, ___m_rectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Graphy::Runtime::UI::G_SafeArea, ___m_lastSafeArea) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Graphy::Runtime::UI::G_SafeArea) == 0x40, "Size mismatch!");

} // namespace end def Graphy::Runtime::UI
