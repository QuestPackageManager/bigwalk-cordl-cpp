#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/LightMeterMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__Monitor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightMeterMonitor)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class LightMeterMonitor;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*, "UnityEngine.Rendering.PostProcessing", "LightMeterMonitor");
// Dependencies UnityEngine.Rendering.PostProcessing.Monitor
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.LightMeterMonitor
class CORDL_TYPE LightMeterMonitor : public ::UnityEngine::Rendering::PostProcessing::Monitor {
public:
// Declarations
/// @brief Field height, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field showCurves, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_showCurves, put=__cordl_internal_set_showCurves)) bool  showCurves;

/// @brief Field width, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

static inline ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor* New_ctor() ;

/// @brief Method Render, addr 0x181fc0510, size 0x370, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method ShaderResourcesAvailable, addr 0x181fc0880, size 0x50, virtual true, abstract: false, final false
inline bool ShaderResourcesAvailable(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr bool const& __cordl_internal_get_showCurves() const;

constexpr bool& __cordl_internal_get_showCurves() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_showCurves(bool  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x181fc08d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightMeterMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightMeterMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightMeterMonitor(LightMeterMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightMeterMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightMeterMonitor(LightMeterMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18601};

/// @brief Field width, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x20, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field showCurves, offset: 0x24, size: 0x1, def value: None
 bool  ___showCurves;

/// @brief Size padding 0x30 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LightMeterMonitor, ___width) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LightMeterMonitor, ___height) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LightMeterMonitor, ___showCurves) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::LightMeterMonitor) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
