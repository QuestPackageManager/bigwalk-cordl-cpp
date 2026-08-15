#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PersistentLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PersistentLod)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class RenderTexture;
}
namespace WaveHarmonic::Crest {
class PersistentLod_AdditionalCameraData;
}
namespace WaveHarmonic::Crest {
class PersistentLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
struct PropertyWrapperCompute;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class PersistentLod;
}
namespace WaveHarmonic::Crest {
class PersistentLod_AdditionalCameraData;
}
namespace WaveHarmonic::Crest {
class PersistentLod_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::PersistentLod*);
MARK_REF_T(::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*);
MARK_REF_T(::WaveHarmonic::Crest::PersistentLod_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PersistentLod*, "WaveHarmonic.Crest", "PersistentLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*, "WaveHarmonic.Crest", "PersistentLod/AdditionalCameraData");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PersistentLod_ShaderIDs*, "WaveHarmonic.Crest", "PersistentLod/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.PersistentLod/ShaderIDs
class CORDL_TYPE PersistentLod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_SimDeltaTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SimDeltaTime, put=setStaticF_s_SimDeltaTime)) int32_t  s_SimDeltaTime;

/// @brief Field s_TemporaryPersistentTarget, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TemporaryPersistentTarget, put=setStaticF_s_TemporaryPersistentTarget)) int32_t  s_TemporaryPersistentTarget;

static inline int32_t getStaticF_s_SimDeltaTime() ;

static inline int32_t getStaticF_s_TemporaryPersistentTarget() ;

static inline void setStaticF_s_SimDeltaTime(int32_t  value) ;

static inline void setStaticF_s_TemporaryPersistentTarget(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistentLod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistentLod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentLod_ShaderIDs(PersistentLod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentLod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentLod_ShaderIDs(PersistentLod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16586};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::PersistentLod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.PersistentLod/AdditionalCameraData
class CORDL_TYPE PersistentLod_AdditionalCameraData : public ::System::Object {
public:
// Declarations
/// @brief Field _PersistentData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PersistentData, put=__cordl_internal_set__PersistentData)) ::UnityW<::UnityEngine::RenderTexture>  _PersistentData;

/// @brief Field _TimeToSimulate, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeToSimulate, put=__cordl_internal_set__TimeToSimulate)) float_t  _TimeToSimulate;

static inline ::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__PersistentData() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__PersistentData() ;

constexpr float_t const& __cordl_internal_get__TimeToSimulate() const;

constexpr float_t& __cordl_internal_get__TimeToSimulate() ;

constexpr void __cordl_internal_set__PersistentData(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__TimeToSimulate(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistentLod_AdditionalCameraData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistentLod_AdditionalCameraData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentLod_AdditionalCameraData(PersistentLod_AdditionalCameraData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentLod_AdditionalCameraData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentLod_AdditionalCameraData(PersistentLod_AdditionalCameraData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16587};

/// @brief Field _PersistentData, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____PersistentData;

/// @brief Field _TimeToSimulate, offset: 0x18, size: 0x4, def value: None
 float_t  ____TimeToSimulate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData, ____PersistentData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData, ____TimeToSimulate) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Lod
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.PersistentLod
class CORDL_TYPE PersistentLod : public ::WaveHarmonic::Crest::Lod {
public:
// Declarations
using AdditionalCameraData = ::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData;

using ShaderIDs = ::WaveHarmonic::Crest::PersistentLod_ShaderIDs;

 __declspec(property(get=get_BufferCount)) int32_t  BufferCount;

 __declspec(property(get=get_Kernel)) int32_t  Kernel;

 __declspec(property(get=get_LastUpdateSubstepCount, put=set_LastUpdateSubstepCount)) int32_t  LastUpdateSubstepCount;

 __declspec(property(get=get_NeedToReadWriteTextureData)) bool  NeedToReadWriteTextureData;

 __declspec(property(get=get_SimulationFrequency, put=set_SimulationFrequency)) int32_t  SimulationFrequency;

 __declspec(property(get=get_SimulationShader)) ::UnityW<::UnityEngine::ComputeShader>  SimulationShader;

 __declspec(property(get=get_SkipFlipBuffers)) bool  SkipFlipBuffers;

/// @brief Field _AdditionalCameraData, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__AdditionalCameraData, put=__cordl_internal_set__AdditionalCameraData)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>*  _AdditionalCameraData;

/// @brief Field <LastUpdateSubstepCount>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastUpdateSubstepCount_k__BackingField, put=__cordl_internal_set__LastUpdateSubstepCount_k__BackingField)) int32_t  _LastUpdateSubstepCount_k__BackingField;

/// @brief Field _NeedsPrewarmingThisStep, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__NeedsPrewarmingThisStep, put=__cordl_internal_set__NeedsPrewarmingThisStep)) bool  _NeedsPrewarmingThisStep;

/// @brief Field _PersistentDataTexture, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__PersistentDataTexture, put=__cordl_internal_set__PersistentDataTexture)) ::UnityW<::UnityEngine::RenderTexture>  _PersistentDataTexture;

/// @brief Field _SimulationFrequency, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__SimulationFrequency, put=__cordl_internal_set__SimulationFrequency)) int32_t  _SimulationFrequency;

/// @brief Field _TimeToSimulate, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeToSimulate, put=__cordl_internal_set__TimeToSimulate)) float_t  _TimeToSimulate;

/// @brief Method Allocate, addr 0x182578b30, size 0xe0, virtual true, abstract: false, final false
inline void Allocate() ;

/// @brief Method BuildCommandBuffer, addr 0x182578c10, size 0x7d0, virtual true, abstract: false, final false
inline void BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method Destroy, addr 0x1825793e0, size 0x110, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Initialize, addr 0x1825794f0, size 0x1b0, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method LoadCameraData, addr 0x1825796a0, size 0x100, virtual true, abstract: false, final false
inline void LoadCameraData(::UnityEngine::Camera*  camera) ;

static inline ::WaveHarmonic::Crest::PersistentLod* New_ctor() ;

/// @brief Method ReAllocate, addr 0x1825797a0, size 0x260, virtual true, abstract: false, final false
inline void ReAllocate() ;

/// @brief Method RemoveCameraData, addr 0x182579a00, size 0xd0, virtual true, abstract: false, final false
inline void RemoveCameraData(::UnityEngine::Camera*  camera) ;

/// @brief Method SetAdditionalSimulationParameters, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SetAdditionalSimulationParameters(::WaveHarmonic::Crest::PropertyWrapperCompute  properties) ;

/// @brief Method StoreCameraData, addr 0x182579ad0, size 0x70, virtual true, abstract: false, final false
inline void StoreCameraData(::UnityEngine::Camera*  camera) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>* const& __cordl_internal_get__AdditionalCameraData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>*& __cordl_internal_get__AdditionalCameraData() ;

constexpr int32_t const& __cordl_internal_get__LastUpdateSubstepCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LastUpdateSubstepCount_k__BackingField() ;

constexpr bool const& __cordl_internal_get__NeedsPrewarmingThisStep() const;

constexpr bool& __cordl_internal_get__NeedsPrewarmingThisStep() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__PersistentDataTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__PersistentDataTexture() ;

constexpr int32_t const& __cordl_internal_get__SimulationFrequency() const;

constexpr int32_t& __cordl_internal_get__SimulationFrequency() ;

constexpr float_t const& __cordl_internal_get__TimeToSimulate() const;

constexpr float_t& __cordl_internal_get__TimeToSimulate() ;

constexpr void __cordl_internal_set__AdditionalCameraData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>*  value) ;

constexpr void __cordl_internal_set__LastUpdateSubstepCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__NeedsPrewarmingThisStep(bool  value) ;

constexpr void __cordl_internal_set__PersistentDataTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__SimulationFrequency(int32_t  value) ;

constexpr void __cordl_internal_set__TimeToSimulate(float_t  value) ;

/// @brief Method .ctor, addr 0x182579b40, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BufferCount, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_BufferCount() ;

/// @brief Method get_Kernel, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Kernel() ;

/// @brief Method get_LastUpdateSubstepCount, addr 0x1803b2c60, size 0x10, virtual false, abstract: false, final false
inline int32_t get_LastUpdateSubstepCount() ;

/// @brief Method get_NeedToReadWriteTextureData, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_NeedToReadWriteTextureData() ;

/// @brief Method get_SimulationFrequency, addr 0x180408b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_SimulationFrequency() ;

/// @brief Method get_SimulationShader, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_SimulationShader() ;

/// @brief Method get_SkipFlipBuffers, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_SkipFlipBuffers() ;

/// @brief Method set_LastUpdateSubstepCount, addr 0x18051e9d0, size 0x10, virtual false, abstract: false, final false
inline void set_LastUpdateSubstepCount(int32_t  value) ;

/// @brief Method set_SimulationFrequency, addr 0x180b9feb0, size 0x2630, virtual false, abstract: false, final false
inline void set_SimulationFrequency(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistentLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistentLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentLod(PersistentLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentLod(PersistentLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16588};

/// @brief Field _SimulationFrequency, offset: 0x94, size: 0x4, def value: None
 int32_t  ____SimulationFrequency;

/// @brief Field _NeedsPrewarmingThisStep, offset: 0x98, size: 0x1, def value: None
 bool  ____NeedsPrewarmingThisStep;

/// @brief Field _TimeToSimulate, offset: 0x9c, size: 0x4, def value: None
 float_t  ____TimeToSimulate;

/// @brief Field _PersistentDataTexture, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____PersistentDataTexture;

/// @brief Field <LastUpdateSubstepCount>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____LastUpdateSubstepCount_k__BackingField;

/// @brief Field _AdditionalCameraData, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>*  ____AdditionalCameraData;

/// @brief Size padding 0xc8 - 0xb8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::PersistentLod, ____SimulationFrequency) == 0x94, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PersistentLod, ____NeedsPrewarmingThisStep) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PersistentLod, ____TimeToSimulate) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PersistentLod, ____PersistentDataTexture) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PersistentLod, ____LastUpdateSubstepCount_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PersistentLod, ____AdditionalCameraData) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::PersistentLod) == 0xc8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
