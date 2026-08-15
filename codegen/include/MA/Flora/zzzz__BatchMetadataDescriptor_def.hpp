#pragma once
// IWYU pragma private; include "MA/Flora/BatchMetadataDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__BatchPropertyInfo_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchMetadataDescriptor)
namespace MA::Flora {
struct BatchBuiltinPropertyFlags;
}
namespace MA::Flora {
struct BatchPropertyInfo;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace MA::Flora {
struct BatchMetadataDescriptor;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BatchMetadataDescriptor);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchMetadataDescriptor, "MA.Flora", "BatchMetadataDescriptor");
// Dependencies MA.Flora.BatchPropertyInfo, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BatchMetadataDescriptor
struct CORDL_TYPE BatchMetadataDescriptor {
public:
// Declarations
 __declspec(property(get=get_AdditionalComponentCount)) int32_t  AdditionalComponentCount;

 __declspec(property(get=get_ComponentCount)) int32_t  ComponentCount;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>*() ;

/// @brief Method AddBuiltinComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AddBuiltinComponent(int32_t  nameID, bool  isOverriden, bool  isPerInstance) ;

/// @brief Method AddComponent, addr 0x181458470, size 0xc0, virtual false, abstract: false, final false
inline void AddComponent(::MA::Flora::BatchPropertyInfo  info) ;

/// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AddComponent(int32_t  nameID, bool  isOverriden, bool  isPerInstance) ;

/// @brief Method AddComponent, addr 0x1814583b0, size 0xc0, virtual false, abstract: false, final false
inline void AddComponent(int32_t  nameID, int32_t  sizeInBytes, bool  isOverriden, bool  isPerInstance) ;

/// @brief Method Dispose, addr 0x181458530, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Equals, addr 0x181458560, size 0xf0, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::BatchMetadataDescriptor  other) ;

/// @brief Method GetHashCode, addr 0x1803914b0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IndexOf, addr 0x181458650, size 0x40, virtual false, abstract: false, final false
inline int32_t IndexOf(int32_t  nameID) ;

/// @brief Method TryGetPropertyIndex, addr 0x180c2edf0, size 0x26f0, virtual false, abstract: false, final false
inline bool TryGetPropertyIndex(int32_t  nameID, ::by_ref<int32_t>  index) ;

/// @brief Method TryGetPropertyInfo, addr 0x181458690, size 0x80, virtual false, abstract: false, final false
inline bool TryGetPropertyInfo(int32_t  nameID, ::by_ref<::MA::Flora::BatchPropertyInfo>  info) ;

/// @brief Method .ctor, addr 0x181458920, size 0x510, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::BatchBuiltinPropertyFlags  flags, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>  additionalComponents, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x181458710, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::BatchBuiltinPropertyFlags  flags, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x181458750, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::MA::Flora::BatchMetadataDescriptor>  other, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method get_AdditionalComponentCount, addr 0x181458e30, size 0x20, virtual false, abstract: false, final false
inline int32_t get_AdditionalComponentCount() ;

/// @brief Method get_ComponentCount, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ComponentCount() ;

/// @brief Method get_IsCreated, addr 0x181458e50, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>"
constexpr ::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>* i___System__IEquatable_1___MA__Flora__BatchMetadataDescriptor_() ;

// Ctor Parameters []
// @brief default ctor
constexpr BatchMetadataDescriptor() ;

// Ctor Parameters [CppParam { name: "ComponentMap", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: None }, CppParam { name: "ComponentArray", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchPropertyInfo>", modifiers: "", def_value: None }, CppParam { name: "BuiltinComponentCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BatchMetadataDescriptor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>  ComponentMap, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchPropertyInfo>  ComponentArray, int32_t  BuiltinComponentCount, int32_t  HashCode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12863};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field ComponentMap, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>  ComponentMap;

/// @brief Field ComponentArray, offset: 0x10, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchPropertyInfo>  ComponentArray;

/// @brief Field BuiltinComponentCount, offset: 0x28, size: 0x4, def value: None
 int32_t  BuiltinComponentCount;

/// @brief Field HashCode, offset: 0x2c, size: 0x4, def value: None
 int32_t  HashCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BatchMetadataDescriptor, ComponentMap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchMetadataDescriptor, ComponentArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchMetadataDescriptor, BuiltinComponentCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchMetadataDescriptor, HashCode) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BatchMetadataDescriptor) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
