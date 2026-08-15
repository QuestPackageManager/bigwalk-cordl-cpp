#pragma once
// IWYU pragma private; include "MA/Flora/BatchDomainLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__BatchPropertyInfo_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchDomainLayout)
namespace MA::Flora {
struct BatchMetadataDescriptor;
}
// Forward declare root types
namespace MA::Flora {
struct BatchDomainLayout;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BatchDomainLayout);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchDomainLayout, "MA.Flora", "BatchDomainLayout");
// Dependencies MA.Flora.BatchPropertyInfo, Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.MetadataValue
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BatchDomainLayout
struct CORDL_TYPE BatchDomainLayout {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Method Dispose, addr 0x181457e80, size 0x40, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetAddress, addr 0x181457ec0, size 0x60, virtual false, abstract: false, final false
inline uint32_t GetAddress(int32_t  nameID) ;

/// @brief Method GetMetadata, addr 0x181457f20, size 0x60, virtual false, abstract: false, final false
inline uint32_t GetMetadata(int32_t  nameID) ;

/// @brief Method GetPerInstanceAddress, addr 0x181457f80, size 0x80, virtual false, abstract: false, final false
inline uint32_t GetPerInstanceAddress(int32_t  nameID) ;

/// @brief Method GetPerInstanceMetadata, addr 0x181458000, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetPerInstanceMetadata(int32_t  nameID) ;

/// @brief Method IsOverriden, addr 0x181458070, size 0x60, virtual false, abstract: false, final false
inline bool IsOverriden(int32_t  nameID) ;

/// @brief Method IsPerInstance, addr 0x1814580d0, size 0x60, virtual false, abstract: false, final false
inline bool IsPerInstance(int32_t  nameID) ;

/// @brief Method .ctor, addr 0x181458130, size 0x260, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::BatchMetadataDescriptor  descriptor, int64_t  baseAddress, int32_t  instanceCapacity, bool  lightProbesEnabled) ;

/// @brief Method get_IsCreated, addr 0x181458390, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

// Ctor Parameters []
// @brief default ctor
constexpr BatchDomainLayout() ;

// Ctor Parameters [CppParam { name: "InstanceCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BaseAddress", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "LengthInBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Properties", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>", modifiers: "", def_value: None }, CppParam { name: "MetadataValues", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>", modifiers: "", def_value: None }, CppParam { name: "NameToIndexMap", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: None }]
constexpr BatchDomainLayout(int32_t  InstanceCapacity, int64_t  BaseAddress, int64_t  LengthInBytes, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>  Properties, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>  MetadataValues, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>  NameToIndexMap) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12914};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field InstanceCapacity, offset: 0x0, size: 0x4, def value: None
 int32_t  InstanceCapacity;

/// @brief Field BaseAddress, offset: 0x8, size: 0x8, def value: None
 int64_t  BaseAddress;

/// @brief Field LengthInBytes, offset: 0x10, size: 0x8, def value: None
 int64_t  LengthInBytes;

/// @brief Field Properties, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>  Properties;

/// @brief Field MetadataValues, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>  MetadataValues;

/// @brief Field NameToIndexMap, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>  NameToIndexMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BatchDomainLayout, InstanceCapacity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchDomainLayout, BaseAddress) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchDomainLayout, LengthInBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchDomainLayout, Properties) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchDomainLayout, MetadataValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchDomainLayout, NameToIndexMap) == 0x38, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BatchDomainLayout) == 0x48, "Size mismatch!");

} // namespace end def MA::Flora
