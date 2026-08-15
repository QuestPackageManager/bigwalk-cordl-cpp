#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeBufferArray_1)
namespace MA::Flora {
struct NativeBufferArrayMetadata;
}
namespace MA::Flora {
struct NativeBufferHeader;
}
namespace MA::Flora {
template<typename T>
struct NativeBuffer_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct NativeBufferArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::NativeBufferArray_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::NativeBufferArray_1, "MA.Flora", "NativeBufferArray`1");
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.NativeBufferArray`1<T>
struct CORDL_TYPE NativeBufferArray_1 {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Item)) ::MA::Flora::NativeBuffer_1<T>  Item[];

 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method CheckIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckIndex(int32_t  index) ;

/// @brief Method CheckReadAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckReadAccess() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetNativeBufferHeader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::MA::Flora::NativeBufferHeader* GetNativeBufferHeader(uint8_t*  ptr, int32_t  index, int32_t  elementSize) ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize(int32_t  newLength) ;

/// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCapacity(int32_t  newCapacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  length, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  length, int32_t  inlineCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBuffer_1<T> get_Item(int32_t  bufferIndex) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  bufferIndex, int32_t  elementIndex) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeBufferArray_1() ;

// Ctor Parameters [CppParam { name: "m_Metadata", ty: "::MA::Flora::NativeBufferArrayMetadata*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
constexpr NativeBufferArray_1(::MA::Flora::NativeBufferArrayMetadata*  m_Metadata, ::Unity::Collections::AllocatorManager_AllocatorHandle  m_AllocatorLabel) noexcept;

/// @brief Field DefaultCapacityNumerator offset 0xffffffff size 0x4
static constexpr int32_t  DefaultCapacityNumerator{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12879};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Metadata, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeBufferArrayMetadata*  m_Metadata;

/// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
 ::Unity::Collections::AllocatorManager_AllocatorHandle  m_AllocatorLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
