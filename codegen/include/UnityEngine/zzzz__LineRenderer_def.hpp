#pragma once
// IWYU pragma private; include "UnityEngine/LineRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LineRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LineRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::LineRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LineRenderer
class CORDL_TYPE LineRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(put=set_positionCount)) int32_t  positionCount;

 __declspec(property(put=set_widthMultiplier)) float_t  widthMultiplier;

static inline ::UnityEngine::LineRenderer* New_ctor() ;

/// @brief Method SetPosition, addr 0x182251d00, size 0x40, virtual false, abstract: false, final false
inline void SetPosition(int32_t  index, ::UnityEngine::Vector3  position) ;

/// @brief Method SetPosition_Injected, addr 0x182251cf0, size 0x10, virtual false, abstract: false, final false
static inline void SetPosition_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_positionCount, addr 0x182251d50, size 0x30, virtual false, abstract: false, final false
inline void set_positionCount(int32_t  value) ;

/// @brief Method set_positionCount_Injected, addr 0x182251d40, size 0x10, virtual false, abstract: false, final false
static inline void set_positionCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_widthMultiplier, addr 0x182251d90, size 0x40, virtual false, abstract: false, final false
inline void set_widthMultiplier(float_t  value) ;

/// @brief Method set_widthMultiplier_Injected, addr 0x182251d80, size 0x10, virtual false, abstract: false, final false
static inline void set_widthMultiplier_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LineRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LineRenderer(LineRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LineRenderer(LineRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LineRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
