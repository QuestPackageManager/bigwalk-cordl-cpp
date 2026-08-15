#pragma once
// IWYU pragma private; include "MA/Flora/DrawRangeKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawRangeKey)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Rendering {
struct BatchCullingViewType;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace MA::Flora {
struct DrawRangeKey;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DrawRangeKey);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawRangeKey, "MA.Flora", "DrawRangeKey");
// Dependencies UnityEngine.MotionVectorGenerationMode, UnityEngine.Rendering.ShadowCastingMode
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawRangeKey
struct CORDL_TYPE DrawRangeKey {
public:
// Declarations
 __declspec(property(get=get_IsInCameraPass)) bool  IsInCameraPass;

 __declspec(property(get=get_IsInMotionPass)) bool  IsInMotionPass;

 __declspec(property(get=get_IsInShadowPass)) bool  IsInShadowPass;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawRangeKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::DrawRangeKey>*() ;

/// @brief Method Equals, addr 0x1814bcbe0, size 0x70, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::DrawRangeKey  rhs) ;

/// @brief Method GetHashCode, addr 0x1814bcc50, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValidForViewType, addr 0x1814bccb0, size 0x30, virtual false, abstract: false, final false
inline bool IsValidForViewType(::UnityEngine::Rendering::BatchCullingViewType  viewType) ;

/// @brief Method .ctor, addr 0x1814bcce0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Renderer*  renderer) ;

/// @brief Method get_IsInCameraPass, addr 0x1814bcd80, size 0x20, virtual false, abstract: false, final false
inline bool get_IsInCameraPass() ;

/// @brief Method get_IsInMotionPass, addr 0x1814bcda0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsInMotionPass() ;

/// @brief Method get_IsInShadowPass, addr 0x1814bcdc0, size 0x90, virtual false, abstract: false, final false
inline bool get_IsInShadowPass() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawRangeKey>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawRangeKey>* i___System__IEquatable_1___MA__Flora__DrawRangeKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawRangeKey() ;

// Ctor Parameters [CppParam { name: "Layer", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "RenderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "RendererPriority", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MotionMode", ty: "::UnityEngine::MotionVectorGenerationMode", modifiers: "", def_value: None }, CppParam { name: "ShadowCastingMode", ty: "::UnityEngine::Rendering::ShadowCastingMode", modifiers: "", def_value: None }, CppParam { name: "ReceiveShadows", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "StaticShadowCaster", ty: "bool", modifiers: "", def_value: None }]
constexpr DrawRangeKey(uint8_t  Layer, uint32_t  RenderingLayerMask, int32_t  RendererPriority, ::UnityEngine::MotionVectorGenerationMode  MotionMode, ::UnityEngine::Rendering::ShadowCastingMode  ShadowCastingMode, bool  ReceiveShadows, bool  StaticShadowCaster) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13181};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Layer, offset: 0x0, size: 0x1, def value: None
 uint8_t  Layer;

/// @brief Field RenderingLayerMask, offset: 0x4, size: 0x4, def value: None
 uint32_t  RenderingLayerMask;

/// @brief Field RendererPriority, offset: 0x8, size: 0x4, def value: None
 int32_t  RendererPriority;

/// @brief Field MotionMode, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::MotionVectorGenerationMode  MotionMode;

/// @brief Field ShadowCastingMode, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Rendering::ShadowCastingMode  ShadowCastingMode;

/// @brief Field ReceiveShadows, offset: 0x14, size: 0x1, def value: None
 bool  ReceiveShadows;

/// @brief Field StaticShadowCaster, offset: 0x15, size: 0x1, def value: None
 bool  StaticShadowCaster;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawRangeKey, Layer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawRangeKey, RenderingLayerMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawRangeKey, RendererPriority) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawRangeKey, MotionMode) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawRangeKey, ShadowCastingMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawRangeKey, ReceiveShadows) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawRangeKey, StaticShadowCaster) == 0x15, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawRangeKey) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
