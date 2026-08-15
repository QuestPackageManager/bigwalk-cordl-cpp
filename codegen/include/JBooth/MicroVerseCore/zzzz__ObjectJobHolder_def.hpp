#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectJobHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__half4_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectJobHolder)
namespace JBooth::MicroVerseCore {
class ObjectStamp_ReturnData;
}
namespace JBooth::MicroVerseCore {
class ObjectStamp;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class ObjectJobHolder;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::ObjectJobHolder*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectJobHolder*, "JBooth.MicroVerseCore", "ObjectJobHolder");
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.half4, UnityEngine.Rendering.AsyncGPUReadbackRequest
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ObjectJobHolder
class CORDL_TYPE ObjectJobHolder : public ::System::Object {
public:
// Declarations
/// @brief Field <canceled>k__BackingField, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__canceled_k__BackingField, put=__cordl_internal_set__canceled_k__BackingField)) bool  _canceled_k__BackingField;

/// @brief Field buffer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::JBooth::MicroVerseCore::ObjectStamp_ReturnData*  buffer;

 __declspec(property(get=get_canceled, put=set_canceled)) bool  canceled;

/// @brief Field gpuRequestPlacement, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_gpuRequestPlacement, put=__cordl_internal_set_gpuRequestPlacement)) ::UnityEngine::Rendering::AsyncGPUReadbackRequest  gpuRequestPlacement;

/// @brief Field gpuRequestRotation, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_gpuRequestRotation, put=__cordl_internal_set_gpuRequestRotation)) ::UnityEngine::Rendering::AsyncGPUReadbackRequest  gpuRequestRotation;

/// @brief Field gpuRequestScale, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_gpuRequestScale, put=__cordl_internal_set_gpuRequestScale)) ::UnityEngine::Rendering::AsyncGPUReadbackRequest  gpuRequestScale;

/// @brief Field objectIndexes, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_objectIndexes, put=__cordl_internal_set_objectIndexes)) ::Unity::Collections::NativeArray_1<uint32_t>  objectIndexes;

/// @brief Field positionTex, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionTex, put=__cordl_internal_set_positionTex)) ::UnityW<::UnityEngine::Texture2D>  positionTex;

/// @brief Field positionWeightData, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_positionWeightData, put=__cordl_internal_set_positionWeightData)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  positionWeightData;

/// @brief Field rotationData, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotationData, put=__cordl_internal_set_rotationData)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  rotationData;

/// @brief Field rotationTex, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotationTex, put=__cordl_internal_set_rotationTex)) ::UnityW<::UnityEngine::Texture2D>  rotationTex;

/// @brief Field scaleIndexData, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_scaleIndexData, put=__cordl_internal_set_scaleIndexData)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  scaleIndexData;

/// @brief Field scaleTex, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleTex, put=__cordl_internal_set_scaleTex)) ::UnityW<::UnityEngine::Texture2D>  scaleTex;

/// @brief Field stamp, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stamp, put=__cordl_internal_set_stamp)) ::UnityW<::JBooth::MicroVerseCore::ObjectStamp>  stamp;

/// @brief Field unpackIndex, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_unpackIndex, put=__cordl_internal_set_unpackIndex)) int32_t  unpackIndex;

/// @brief Method Dispose, addr 0x181409e10, size 0x120, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method IsDone, addr 0x181409f30, size 0x80, virtual false, abstract: false, final false
inline bool IsDone() ;

static inline ::JBooth::MicroVerseCore::ObjectJobHolder* New_ctor(::JBooth::MicroVerseCore::ObjectStamp*  stamp, ::Unity::Collections::NativeArray_1<uint32_t>  objIndexes, ::JBooth::MicroVerseCore::ObjectStamp_ReturnData*  buffer, int32_t  maxCount) ;

constexpr bool const& __cordl_internal_get__canceled_k__BackingField() const;

constexpr bool& __cordl_internal_get__canceled_k__BackingField() ;

constexpr ::JBooth::MicroVerseCore::ObjectStamp_ReturnData* const& __cordl_internal_get_buffer() const;

constexpr ::JBooth::MicroVerseCore::ObjectStamp_ReturnData*& __cordl_internal_get_buffer() ;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& __cordl_internal_get_gpuRequestPlacement() const;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& __cordl_internal_get_gpuRequestPlacement() ;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& __cordl_internal_get_gpuRequestRotation() const;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& __cordl_internal_get_gpuRequestRotation() ;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& __cordl_internal_get_gpuRequestScale() const;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& __cordl_internal_get_gpuRequestScale() ;

constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& __cordl_internal_get_objectIndexes() const;

constexpr ::Unity::Collections::NativeArray_1<uint32_t>& __cordl_internal_get_objectIndexes() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_positionTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_positionTex() ;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& __cordl_internal_get_positionWeightData() const;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& __cordl_internal_get_positionWeightData() ;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& __cordl_internal_get_rotationData() const;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& __cordl_internal_get_rotationData() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_rotationTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_rotationTex() ;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& __cordl_internal_get_scaleIndexData() const;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& __cordl_internal_get_scaleIndexData() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_scaleTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_scaleTex() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::ObjectStamp> const& __cordl_internal_get_stamp() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::ObjectStamp>& __cordl_internal_get_stamp() ;

constexpr int32_t const& __cordl_internal_get_unpackIndex() const;

constexpr int32_t& __cordl_internal_get_unpackIndex() ;

constexpr void __cordl_internal_set__canceled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_buffer(::JBooth::MicroVerseCore::ObjectStamp_ReturnData*  value) ;

constexpr void __cordl_internal_set_gpuRequestPlacement(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value) ;

constexpr void __cordl_internal_set_gpuRequestRotation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value) ;

constexpr void __cordl_internal_set_gpuRequestScale(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value) ;

constexpr void __cordl_internal_set_objectIndexes(::Unity::Collections::NativeArray_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_positionTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_positionWeightData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value) ;

constexpr void __cordl_internal_set_rotationData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value) ;

constexpr void __cordl_internal_set_rotationTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_scaleIndexData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value) ;

constexpr void __cordl_internal_set_scaleTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_stamp(::UnityW<::JBooth::MicroVerseCore::ObjectStamp>  value) ;

constexpr void __cordl_internal_set_unpackIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x181409fb0, size 0x4d0, virtual false, abstract: false, final false
inline void _ctor(::JBooth::MicroVerseCore::ObjectStamp*  stamp, ::Unity::Collections::NativeArray_1<uint32_t>  objIndexes, ::JBooth::MicroVerseCore::ObjectStamp_ReturnData*  buffer, int32_t  maxCount) ;

/// @brief Method get_canceled, addr 0x18030d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_canceled() ;

/// @brief Method set_canceled, addr 0x18140a480, size 0x10, virtual false, abstract: false, final false
inline void set_canceled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectJobHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectJobHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectJobHolder(ObjectJobHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectJobHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectJobHolder(ObjectJobHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17918};

/// @brief Field stamp, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::ObjectStamp>  ___stamp;

/// @brief Field positionWeightData, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  ___positionWeightData;

/// @brief Field rotationData, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  ___rotationData;

/// @brief Field scaleIndexData, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  ___scaleIndexData;

/// @brief Field gpuRequestPlacement, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  ___gpuRequestPlacement;

/// @brief Field gpuRequestRotation, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  ___gpuRequestRotation;

/// @brief Field gpuRequestScale, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  ___gpuRequestScale;

/// @brief Field objectIndexes, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint32_t>  ___objectIndexes;

/// @brief Field buffer, offset: 0x88, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::ObjectStamp_ReturnData*  ___buffer;

/// @brief Field unpackIndex, offset: 0x90, size: 0x4, def value: None
 int32_t  ___unpackIndex;

/// @brief Field positionTex, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___positionTex;

/// @brief Field rotationTex, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___rotationTex;

/// @brief Field scaleTex, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___scaleTex;

/// @brief Field <canceled>k__BackingField, offset: 0xb0, size: 0x1, def value: None
 bool  ____canceled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___stamp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___positionWeightData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___rotationData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___scaleIndexData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___gpuRequestPlacement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___gpuRequestRotation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___gpuRequestScale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___objectIndexes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___buffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___unpackIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___positionTex) == 0x98, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___rotationTex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ___scaleTex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectJobHolder, ____canceled_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectJobHolder) == 0xb8, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
