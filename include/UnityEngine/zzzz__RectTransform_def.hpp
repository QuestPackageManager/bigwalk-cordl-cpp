#pragma once
// IWYU pragma private; include "UnityEngine/RectTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RectTransform)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct RectTransform_Axis;
}
namespace UnityEngine {
class RectTransform_ReapplyDrivenProperties;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct RectTransform_Axis;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class RectTransform_ReapplyDrivenProperties;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RectTransform_Axis);
MARK_REF_T(::UnityEngine::RectTransform*);
MARK_REF_T(::UnityEngine::RectTransform_ReapplyDrivenProperties*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RectTransform_Axis, "UnityEngine", "RectTransform/Axis");
DEFINE_IL2CPP_CLASS(::UnityEngine::RectTransform*, "UnityEngine", "RectTransform");
DEFINE_IL2CPP_CLASS(::UnityEngine::RectTransform_ReapplyDrivenProperties*, "UnityEngine", "RectTransform/ReapplyDrivenProperties");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RectTransform/Axis
struct CORDL_TYPE RectTransform_Axis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RectTransform_Axis_Unwrapped
enum struct __RectTransform_Axis_Unwrapped : int32_t {
__E_Horizontal = static_cast<int32_t>(0x0),
__E_Vertical = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RectTransform_Axis_Unwrapped () const noexcept {
return static_cast<__RectTransform_Axis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RectTransform_Axis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RectTransform_Axis(int32_t  value__) noexcept;

/// @brief Field Horizontal value: I32(0)
static ::UnityEngine::RectTransform_Axis const Horizontal;

/// @brief Field Vertical value: I32(1)
static ::UnityEngine::RectTransform_Axis const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10775};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RectTransform_Axis, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::RectTransform_Axis) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RectTransform/ReapplyDrivenProperties
class CORDL_TYPE RectTransform_ReapplyDrivenProperties : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::RectTransform*  driven) ;

static inline ::UnityEngine::RectTransform_ReapplyDrivenProperties* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RectTransform_ReapplyDrivenProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RectTransform_ReapplyDrivenProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RectTransform_ReapplyDrivenProperties(RectTransform_ReapplyDrivenProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectTransform_ReapplyDrivenProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectTransform_ReapplyDrivenProperties(RectTransform_ReapplyDrivenProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10776};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RectTransform_ReapplyDrivenProperties) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Transform
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RectTransform
class CORDL_TYPE RectTransform : public ::UnityEngine::Transform {
public:
// Declarations
using Axis = ::UnityEngine::RectTransform_Axis;

using ReapplyDrivenProperties = ::UnityEngine::RectTransform_ReapplyDrivenProperties;

 __declspec(property(get=get_anchorMax, put=set_anchorMax)) ::UnityEngine::Vector2  anchorMax;

 __declspec(property(get=get_anchorMin, put=set_anchorMin)) ::UnityEngine::Vector2  anchorMin;

 __declspec(property(get=get_anchoredPosition, put=set_anchoredPosition)) ::UnityEngine::Vector2  anchoredPosition;

 __declspec(property(get=get_offsetMax, put=set_offsetMax)) ::UnityEngine::Vector2  offsetMax;

 __declspec(property(get=get_offsetMin, put=set_offsetMin)) ::UnityEngine::Vector2  offsetMin;

 __declspec(property(get=get_pivot, put=set_pivot)) ::UnityEngine::Vector2  pivot;

/// @brief Field reapplyDrivenProperties, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reapplyDrivenProperties, put=setStaticF_reapplyDrivenProperties)) ::UnityEngine::RectTransform_ReapplyDrivenProperties*  reapplyDrivenProperties;

 __declspec(property(get=get_rect)) ::UnityEngine::Rect  rect;

 __declspec(property(put=set_sendChildDimensionsChange)) bool  sendChildDimensionsChange;

 __declspec(property(get=get_sizeDelta, put=set_sizeDelta)) ::UnityEngine::Vector2  sizeDelta;

/// @brief Method GetLocalCorners, addr 0x182283c80, size 0xd0, virtual false, abstract: false, final false
inline void GetLocalCorners(::ArrayW<::UnityEngine::Vector3>  fourCornersArray) ;

/// @brief Method GetParentSize, addr 0x182283d50, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetParentSize() ;

/// @brief Method GetWorldCorners, addr 0x182283e10, size 0x320, virtual false, abstract: false, final false
inline void GetWorldCorners(::ArrayW<::UnityEngine::Vector3>  fourCornersArray) ;

static inline ::UnityEngine::RectTransform* New_ctor() ;

/// @brief Method SendReapplyDrivenProperties, addr 0x182284130, size 0x30, virtual false, abstract: false, final false
static inline void SendReapplyDrivenProperties(::UnityEngine::RectTransform*  driven) ;

/// @brief Method SetSizeWithCurrentAnchors, addr 0x182284160, size 0x260, virtual false, abstract: false, final false
inline void SetSizeWithCurrentAnchors(::UnityEngine::RectTransform_Axis  axis, float_t  size) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_reapplyDrivenProperties, addr 0x1822843c0, size 0x90, virtual false, abstract: false, final false
static inline void add_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties*  value) ;

static inline ::UnityEngine::RectTransform_ReapplyDrivenProperties* getStaticF_reapplyDrivenProperties() ;

/// @brief Method get_anchorMax, addr 0x182284460, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_anchorMax() ;

/// @brief Method get_anchorMax_Injected, addr 0x182284450, size 0x10, virtual false, abstract: false, final false
static inline void get_anchorMax_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_anchorMin, addr 0x1822844b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_anchorMin() ;

/// @brief Method get_anchorMin_Injected, addr 0x1822844a0, size 0x10, virtual false, abstract: false, final false
static inline void get_anchorMin_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_anchoredPosition, addr 0x182284500, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_anchoredPosition() ;

/// @brief Method get_anchoredPosition_Injected, addr 0x1822844f0, size 0x10, virtual false, abstract: false, final false
static inline void get_anchoredPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_offsetMax, addr 0x182284540, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_offsetMax() ;

/// @brief Method get_offsetMin, addr 0x182284600, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_offsetMin() ;

/// @brief Method get_pivot, addr 0x1822846d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_pivot() ;

/// @brief Method get_pivot_Injected, addr 0x1822846c0, size 0x10, virtual false, abstract: false, final false
static inline void get_pivot_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_rect, addr 0x182284720, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_rect() ;

/// @brief Method get_rect_Injected, addr 0x182284710, size 0x10, virtual false, abstract: false, final false
static inline void get_rect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  ret) ;

/// @brief Method get_sizeDelta, addr 0x182284770, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_sizeDelta() ;

/// @brief Method get_sizeDelta_Injected, addr 0x182284760, size 0x10, virtual false, abstract: false, final false
static inline void get_sizeDelta_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method remove_reapplyDrivenProperties, addr 0x1822847b0, size 0x90, virtual false, abstract: false, final false
static inline void remove_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties*  value) ;

static inline void setStaticF_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties*  value) ;

/// @brief Method set_anchorMax, addr 0x182284850, size 0x30, virtual false, abstract: false, final false
inline void set_anchorMax(::UnityEngine::Vector2  value) ;

/// @brief Method set_anchorMax_Injected, addr 0x182284840, size 0x10, virtual false, abstract: false, final false
static inline void set_anchorMax_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_anchorMin, addr 0x182284890, size 0x30, virtual false, abstract: false, final false
inline void set_anchorMin(::UnityEngine::Vector2  value) ;

/// @brief Method set_anchorMin_Injected, addr 0x182284880, size 0x10, virtual false, abstract: false, final false
static inline void set_anchorMin_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_anchoredPosition, addr 0x1822848d0, size 0x30, virtual false, abstract: false, final false
inline void set_anchoredPosition(::UnityEngine::Vector2  value) ;

/// @brief Method set_anchoredPosition_Injected, addr 0x1822848c0, size 0x10, virtual false, abstract: false, final false
static inline void set_anchoredPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_offsetMax, addr 0x182284900, size 0x1e0, virtual false, abstract: false, final false
inline void set_offsetMax(::UnityEngine::Vector2  value) ;

/// @brief Method set_offsetMin, addr 0x182284ae0, size 0x1e0, virtual false, abstract: false, final false
inline void set_offsetMin(::UnityEngine::Vector2  value) ;

/// @brief Method set_pivot, addr 0x182284cd0, size 0x30, virtual false, abstract: false, final false
inline void set_pivot(::UnityEngine::Vector2  value) ;

/// @brief Method set_pivot_Injected, addr 0x182284cc0, size 0x10, virtual false, abstract: false, final false
static inline void set_pivot_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_sendChildDimensionsChange, addr 0x182284d10, size 0x30, virtual false, abstract: false, final false
inline void set_sendChildDimensionsChange(bool  value) ;

/// @brief Method set_sendChildDimensionsChange_Injected, addr 0x182284d00, size 0x10, virtual false, abstract: false, final false
static inline void set_sendChildDimensionsChange_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_sizeDelta, addr 0x182284d50, size 0x30, virtual false, abstract: false, final false
inline void set_sizeDelta(::UnityEngine::Vector2  value) ;

/// @brief Method set_sizeDelta_Injected, addr 0x182284d40, size 0x10, virtual false, abstract: false, final false
static inline void set_sizeDelta_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RectTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RectTransform(RectTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectTransform(RectTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10777};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RectTransform) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
