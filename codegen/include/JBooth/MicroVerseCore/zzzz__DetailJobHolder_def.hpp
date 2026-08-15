#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/DetailJobHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DetailJobHolder)
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class DetailJobHolder;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::DetailJobHolder*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::DetailJobHolder*, "JBooth.MicroVerseCore", "DetailJobHolder");
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.AsyncGPUReadbackRequest
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.DetailJobHolder
class CORDL_TYPE DetailJobHolder : public ::System::Object {
public:
// Declarations
/// @brief Field <canceled>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__canceled_k__BackingField, put=__cordl_internal_set__canceled_k__BackingField)) bool  _canceled_k__BackingField;

/// @brief Field <detailIndex>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__detailIndex_k__BackingField, put=__cordl_internal_set__detailIndex_k__BackingField)) int32_t  _detailIndex_k__BackingField;

 __declspec(property(get=get_canceled, put=set_canceled)) bool  canceled;

 __declspec(property(get=get_detailIndex, put=set_detailIndex)) int32_t  detailIndex;

/// @brief Field detailLayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailLayer, put=__cordl_internal_set_detailLayer)) ::UnityW<::UnityEngine::RenderTexture>  detailLayer;

/// @brief Field gpuRequest, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_gpuRequest, put=__cordl_internal_set_gpuRequest)) ::UnityEngine::Rendering::AsyncGPUReadbackRequest  gpuRequest;

/// @brief Field height, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field rawData, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_rawData, put=__cordl_internal_set_rawData)) ::Unity::Collections::NativeArray_1<uint8_t>  rawData;

/// @brief Field resultValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_resultValues, put=setStaticF_resultValues)) ::System::Object*  resultValues;

/// @brief Field terrain, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrain, put=__cordl_internal_set_terrain)) ::UnityW<::UnityEngine::Terrain>  terrain;

/// @brief Field width, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Method AddJob, addr 0x18141b830, size 0x3d0, virtual false, abstract: false, final false
inline void AddJob(::UnityEngine::RenderTexture*  detailLayer, int32_t  detailIndex) ;

/// @brief Method Dispose, addr 0x18141bc00, size 0x30, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method IsDone, addr 0x18141bc30, size 0x10, virtual false, abstract: false, final false
inline bool IsDone() ;

static inline ::JBooth::MicroVerseCore::DetailJobHolder* New_ctor() ;

/// @brief Method OnAsynComplete, addr 0x18141bc40, size 0x270, virtual false, abstract: false, final false
inline void OnAsynComplete(::UnityEngine::Rendering::AsyncGPUReadbackRequest  obj) ;

constexpr bool const& __cordl_internal_get__canceled_k__BackingField() const;

constexpr bool& __cordl_internal_get__canceled_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__detailIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__detailIndex_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_detailLayer() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_detailLayer() ;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& __cordl_internal_get_gpuRequest() const;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& __cordl_internal_get_gpuRequest() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_rawData() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_rawData() ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_terrain() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_terrain() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set__canceled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__detailIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_detailLayer(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_gpuRequest(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_rawData(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Object* getStaticF_resultValues() ;

/// @brief Method get_canceled, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_canceled() ;

/// @brief Method get_detailIndex, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_detailIndex() ;

static inline void setStaticF_resultValues(::System::Object*  value) ;

/// @brief Method set_canceled, addr 0x1802f8090, size 0x10, virtual false, abstract: false, final false
inline void set_canceled(bool  value) ;

/// @brief Method set_detailIndex, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_detailIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailJobHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailJobHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailJobHolder(DetailJobHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailJobHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailJobHolder(DetailJobHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17978};

/// @brief Field gpuRequest, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  ___gpuRequest;

/// @brief Field detailLayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___detailLayer;

/// @brief Field <detailIndex>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____detailIndex_k__BackingField;

/// @brief Field terrain, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ___terrain;

/// @brief Field rawData, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___rawData;

/// @brief Field width, offset: 0x48, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field <canceled>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____canceled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::DetailJobHolder, ___gpuRequest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailJobHolder, ___detailLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailJobHolder, ____detailIndex_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailJobHolder, ___terrain) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailJobHolder, ___rawData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailJobHolder, ___width) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailJobHolder, ___height) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailJobHolder, ____canceled_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::DetailJobHolder) == 0x58, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
