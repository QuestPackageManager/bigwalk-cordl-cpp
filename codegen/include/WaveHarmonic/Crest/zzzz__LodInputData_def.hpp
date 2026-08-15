#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LodInputData)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace WaveHarmonic::Crest {
class LodInput;
}
namespace WaveHarmonic::Crest {
class Lod;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class LodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::LodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LodInputData*, "WaveHarmonic.Crest", "LodInputData");
// Dependencies UnityEngine.Bounds, UnityEngine.Rect, WaveHarmonic.Crest.Internal.Versioned
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LodInputData
class CORDL_TYPE LodInputData : public ::WaveHarmonic::Crest::Internal::Versioned {
public:
// Declarations
 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

 __declspec(property(get=get_HasHeightRange)) bool  HasHeightRange;

 __declspec(property(get=get_HeightRange)) ::UnityEngine::Vector2  HeightRange;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

/// @brief Field _Bounds, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get__Bounds, put=__cordl_internal_set__Bounds)) ::UnityEngine::Bounds  _Bounds;

/// @brief Field _Input, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::UnityW<::WaveHarmonic::Crest::LodInput>  _Input;

/// @brief Field _RecalculateBounds, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__RecalculateBounds, put=__cordl_internal_set__RecalculateBounds)) bool  _RecalculateBounds;

/// @brief Field _RecalculateRect, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__RecalculateRect, put=__cordl_internal_set__RecalculateRect)) bool  _RecalculateRect;

/// @brief Field _Rect, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__Rect, put=__cordl_internal_set__Rect)) ::UnityEngine::Rect  _Rect;

/// @brief Method Draw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Component*  component, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::LodInputData* New_ctor() ;

/// @brief Method OnDestroy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnLateUpdate() ;

/// @brief Method OnUpdate, addr 0x18255a670, size 0x40, virtual true, abstract: false, final false
inline void OnUpdate() ;

/// @brief Method RecalculateBounds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RecalculateBounds() ;

/// @brief Method RecalculateCulling, addr 0x18255a6b0, size 0x10, virtual false, abstract: false, final false
inline void RecalculateCulling() ;

/// @brief Method RecalculateRect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RecalculateRect() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__Bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__Bounds() ;

constexpr ::UnityW<::WaveHarmonic::Crest::LodInput> const& __cordl_internal_get__Input() const;

constexpr ::UnityW<::WaveHarmonic::Crest::LodInput>& __cordl_internal_get__Input() ;

constexpr bool const& __cordl_internal_get__RecalculateBounds() const;

constexpr bool& __cordl_internal_get__RecalculateBounds() ;

constexpr bool const& __cordl_internal_get__RecalculateRect() const;

constexpr bool& __cordl_internal_get__RecalculateRect() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__Rect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__Rect() ;

constexpr void __cordl_internal_set__Bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::LodInput>  value) ;

constexpr void __cordl_internal_set__RecalculateBounds(bool  value) ;

constexpr void __cordl_internal_set__RecalculateRect(bool  value) ;

constexpr void __cordl_internal_set__Rect(::UnityEngine::Rect  value) ;

/// @brief Method .ctor, addr 0x182553b60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Bounds, addr 0x18255a6c0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_Bounds() ;

/// @brief Method get_HasHeightRange, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_HasHeightRange() ;

/// @brief Method get_HeightRange, addr 0x18255a710, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_HeightRange() ;

/// @brief Method get_IsEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsEnabled() ;

/// @brief Method get_Rect, addr 0x18255a790, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_Rect() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LodInputData(LodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LodInputData(LodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16558};

/// @brief Field _Input, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::LodInput>  ____Input;

/// @brief Field _Rect, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rect  ____Rect;

/// @brief Field _Bounds, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____Bounds;

/// @brief Field _RecalculateRect, offset: 0x48, size: 0x1, def value: None
 bool  ____RecalculateRect;

/// @brief Field _RecalculateBounds, offset: 0x49, size: 0x1, def value: None
 bool  ____RecalculateBounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::LodInputData, ____Input) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInputData, ____Rect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInputData, ____Bounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInputData, ____RecalculateRect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInputData, ____RecalculateBounds) == 0x49, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::LodInputData) == 0x50, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
