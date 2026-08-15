#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Monitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Monitor)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class Monitor;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Monitor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Monitor*, "UnityEngine.Rendering.PostProcessing", "Monitor");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Monitor
class CORDL_TYPE Monitor : public ::System::Object {
public:
// Declarations
/// @brief Field <output>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__output_k__BackingField, put=__cordl_internal_set__output_k__BackingField)) ::UnityW<::UnityEngine::RenderTexture>  _output_k__BackingField;

 __declspec(property(get=get_output, put=set_output)) ::UnityW<::UnityEngine::RenderTexture>  output;

/// @brief Field requested, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_requested, put=__cordl_internal_set_requested)) bool  requested;

/// @brief Method CheckOutput, addr 0x181fc1050, size 0x120, virtual false, abstract: false, final false
inline void CheckOutput(int32_t  width, int32_t  height) ;

/// @brief Method IsRequestedAndSupported, addr 0x181fc1170, size 0x80, virtual false, abstract: false, final false
inline bool IsRequestedAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method NeedsHalfRes, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool NeedsHalfRes() ;

static inline ::UnityEngine::Rendering::PostProcessing::Monitor* New_ctor() ;

/// @brief Method OnDisable, addr 0x181fc11f0, size 0x30, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Render, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method ShaderResourcesAvailable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ShaderResourcesAvailable(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__output_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__output_k__BackingField() ;

constexpr bool const& __cordl_internal_get_requested() const;

constexpr bool& __cordl_internal_get_requested() ;

constexpr void __cordl_internal_set__output_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_requested(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_output, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_output() ;

/// @brief Method set_output, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_output(::UnityEngine::RenderTexture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Monitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Monitor(Monitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Monitor(Monitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18603};

/// @brief Field <output>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____output_k__BackingField;

/// @brief Field requested, offset: 0x18, size: 0x1, def value: None
 bool  ___requested;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Monitor, ____output_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Monitor, ___requested) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Monitor) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
