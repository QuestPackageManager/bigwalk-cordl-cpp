#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TemporalAntialiasing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemporalAntialiasing)
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
struct TemporalAntialiasing_Pass;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct TemporalAntialiasing_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class TemporalAntialiasing;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass, "UnityEngine.Rendering.PostProcessing", "TemporalAntialiasing/Pass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*, "UnityEngine.Rendering.PostProcessing", "TemporalAntialiasing");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.TemporalAntialiasing/Pass
struct CORDL_TYPE TemporalAntialiasing_Pass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TemporalAntialiasing_Pass_Unwrapped
enum struct __TemporalAntialiasing_Pass_Unwrapped : int32_t {
__E_SolverDilate = static_cast<int32_t>(0x0),
__E_SolverNoDilate = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TemporalAntialiasing_Pass_Unwrapped () const noexcept {
return static_cast<__TemporalAntialiasing_Pass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TemporalAntialiasing_Pass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TemporalAntialiasing_Pass(int32_t  value__) noexcept;

/// @brief Field SolverDilate value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass const SolverDilate;

/// @brief Field SolverNoDilate value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass const SolverNoDilate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18593};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object, UnityEngine.RenderTexture, UnityEngine.Rendering.RenderTargetIdentifier, UnityEngine.Vector2
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
class CORDL_TYPE TemporalAntialiasing : public ::System::Object {
public:
// Declarations
using Pass = ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass;

/// @brief Field <jitter>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__jitter_k__BackingField, put=__cordl_internal_set__jitter_k__BackingField)) ::UnityEngine::Vector2  _jitter_k__BackingField;

/// @brief Field <sampleIndex>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleIndex_k__BackingField, put=__cordl_internal_set__sampleIndex_k__BackingField)) int32_t  _sampleIndex_k__BackingField;

 __declspec(property(get=get_jitter, put=set_jitter)) ::UnityEngine::Vector2  jitter;

/// @brief Field jitterSpread, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_jitterSpread, put=__cordl_internal_set_jitterSpread)) float_t  jitterSpread;

/// @brief Field jitteredMatrixFunc, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_jitteredMatrixFunc, put=__cordl_internal_set_jitteredMatrixFunc)) ::System::Func_3<::UnityW<::UnityEngine::Camera>,::UnityEngine::Vector2,::UnityEngine::Matrix4x4>*  jitteredMatrixFunc;

/// @brief Field m_HistoryPingPong, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HistoryPingPong, put=__cordl_internal_set_m_HistoryPingPong)) ::ArrayW<int32_t>  m_HistoryPingPong;

/// @brief Field m_HistoryTextures, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HistoryTextures, put=__cordl_internal_set_m_HistoryTextures)) ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  m_HistoryTextures;

/// @brief Field m_Mrt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Mrt, put=__cordl_internal_set_m_Mrt)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  m_Mrt;

/// @brief Field m_ResetHistory, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ResetHistory, put=__cordl_internal_set_m_ResetHistory)) bool  m_ResetHistory;

/// @brief Field motionBlending, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_motionBlending, put=__cordl_internal_set_motionBlending)) float_t  motionBlending;

 __declspec(property(get=get_sampleIndex, put=set_sampleIndex)) int32_t  sampleIndex;

/// @brief Field sharpness, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_sharpness, put=__cordl_internal_set_sharpness)) float_t  sharpness;

/// @brief Field stationaryBlending, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_stationaryBlending, put=__cordl_internal_set_stationaryBlending)) float_t  stationaryBlending;

/// @brief Method CheckHistory, addr 0x181fbddf0, size 0x340, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> CheckHistory(int32_t  id, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method ConfigureJitteredProjectionMatrix, addr 0x181fbe130, size 0x1e0, virtual false, abstract: false, final false
inline void ConfigureJitteredProjectionMatrix(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method ConfigureStereoJitteredProjectionMatrices, addr 0x181fbe310, size 0x170, virtual false, abstract: false, final false
inline void ConfigureStereoJitteredProjectionMatrices(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method GenerateHistoryName, addr 0x181fbe480, size 0xb0, virtual false, abstract: false, final false
inline void GenerateHistoryName(::UnityEngine::RenderTexture*  rt, int32_t  id, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method GenerateRandomOffset, addr 0x181fbe530, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GenerateRandomOffset() ;

/// @brief Method GetCameraFlags, addr 0x180908b40, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

/// @brief Method GetJitteredProjectionMatrix, addr 0x181fbe5d0, size 0x180, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetJitteredProjectionMatrix(::UnityEngine::Camera*  camera) ;

/// @brief Method IsSupported, addr 0x181fbe750, size 0x30, virtual false, abstract: false, final false
inline bool IsSupported() ;

static inline ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* New_ctor() ;

/// @brief Method Release, addr 0x181fbe780, size 0x110, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method Render, addr 0x181fbe890, size 0x2c0, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method ResetHistory, addr 0x180de8a00, size 0x770, virtual false, abstract: false, final false
inline void ResetHistory() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__jitter_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__jitter_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__sampleIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__sampleIndex_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_jitterSpread() const;

constexpr float_t& __cordl_internal_get_jitterSpread() ;

constexpr ::System::Func_3<::UnityW<::UnityEngine::Camera>,::UnityEngine::Vector2,::UnityEngine::Matrix4x4>* const& __cordl_internal_get_jitteredMatrixFunc() const;

constexpr ::System::Func_3<::UnityW<::UnityEngine::Camera>,::UnityEngine::Vector2,::UnityEngine::Matrix4x4>*& __cordl_internal_get_jitteredMatrixFunc() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_HistoryPingPong() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_HistoryPingPong() ;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>> const& __cordl_internal_get_m_HistoryTextures() const;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>& __cordl_internal_get_m_HistoryTextures() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& __cordl_internal_get_m_Mrt() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& __cordl_internal_get_m_Mrt() ;

constexpr bool const& __cordl_internal_get_m_ResetHistory() const;

constexpr bool& __cordl_internal_get_m_ResetHistory() ;

constexpr float_t const& __cordl_internal_get_motionBlending() const;

constexpr float_t& __cordl_internal_get_motionBlending() ;

constexpr float_t const& __cordl_internal_get_sharpness() const;

constexpr float_t& __cordl_internal_get_sharpness() ;

constexpr float_t const& __cordl_internal_get_stationaryBlending() const;

constexpr float_t& __cordl_internal_get_stationaryBlending() ;

constexpr void __cordl_internal_set__jitter_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__sampleIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_jitterSpread(float_t  value) ;

constexpr void __cordl_internal_set_jitteredMatrixFunc(::System::Func_3<::UnityW<::UnityEngine::Camera>,::UnityEngine::Vector2,::UnityEngine::Matrix4x4>*  value) ;

constexpr void __cordl_internal_set_m_HistoryPingPong(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_HistoryTextures(::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  value) ;

constexpr void __cordl_internal_set_m_Mrt(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value) ;

constexpr void __cordl_internal_set_m_ResetHistory(bool  value) ;

constexpr void __cordl_internal_set_motionBlending(float_t  value) ;

constexpr void __cordl_internal_set_sharpness(float_t  value) ;

constexpr void __cordl_internal_set_stationaryBlending(float_t  value) ;

/// @brief Method .ctor, addr 0x181fbeb50, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_jitter, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_jitter() ;

/// @brief Method get_sampleIndex, addr 0x1803231b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_sampleIndex() ;

/// @brief Method set_jitter, addr 0x1804f6720, size 0x10, virtual false, abstract: false, final false
inline void set_jitter(::UnityEngine::Vector2  value) ;

/// @brief Method set_sampleIndex, addr 0x180323270, size 0x10, virtual false, abstract: false, final false
inline void set_sampleIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemporalAntialiasing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemporalAntialiasing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TemporalAntialiasing(TemporalAntialiasing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemporalAntialiasing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemporalAntialiasing(TemporalAntialiasing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18594};

/// @brief Field k_NumEyes offset 0xffffffff size 0x4
static constexpr int32_t  k_NumEyes{static_cast<int32_t>(0x2)};

/// @brief Field k_NumHistoryTextures offset 0xffffffff size 0x4
static constexpr int32_t  k_NumHistoryTextures{static_cast<int32_t>(0x2)};

/// @brief Field k_SampleCount offset 0xffffffff size 0x4
static constexpr int32_t  k_SampleCount{static_cast<int32_t>(0x8)};

/// @brief Field jitterSpread, offset: 0x10, size: 0x4, def value: None
 float_t  ___jitterSpread;

/// @brief Field sharpness, offset: 0x14, size: 0x4, def value: None
 float_t  ___sharpness;

/// @brief Field stationaryBlending, offset: 0x18, size: 0x4, def value: None
 float_t  ___stationaryBlending;

/// @brief Field motionBlending, offset: 0x1c, size: 0x4, def value: None
 float_t  ___motionBlending;

/// @brief Field jitteredMatrixFunc, offset: 0x20, size: 0x8, def value: None
 ::System::Func_3<::UnityW<::UnityEngine::Camera>,::UnityEngine::Vector2,::UnityEngine::Matrix4x4>*  ___jitteredMatrixFunc;

/// @brief Field <jitter>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____jitter_k__BackingField;

/// @brief Field m_Mrt, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  ___m_Mrt;

/// @brief Field m_ResetHistory, offset: 0x38, size: 0x1, def value: None
 bool  ___m_ResetHistory;

/// @brief Field <sampleIndex>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____sampleIndex_k__BackingField;

/// @brief Field m_HistoryTextures, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  ___m_HistoryTextures;

/// @brief Field m_HistoryPingPong, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_HistoryPingPong;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ___jitterSpread) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ___sharpness) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ___stationaryBlending) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ___motionBlending) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ___jitteredMatrixFunc) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ____jitter_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ___m_Mrt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ___m_ResetHistory) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ____sampleIndex_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ___m_HistoryTextures) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing, ___m_HistoryPingPong) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
