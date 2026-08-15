#pragma once
// IWYU pragma private; include "System/GC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GC)
namespace System::Runtime::CompilerServices {
struct Ephemeron;
}
namespace System {
class Object;
}
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace System {
class GC;
}
// Write type traits
MARK_REF_T(::System::GC*);
DEFINE_IL2CPP_CLASS(::System::GC*, "System", "GC");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.GC
class CORDL_TYPE GC : public ::System::Object {
public:
// Declarations
/// @brief Field EPHEMERON_TOMBSTONE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EPHEMERON_TOMBSTONE, put=setStaticF_EPHEMERON_TOMBSTONE)) ::System::Object*  EPHEMERON_TOMBSTONE;

/// @brief Method AddMemoryPressure, addr 0x181739230, size 0x90, virtual false, abstract: false, final false
static inline void AddMemoryPressure(int64_t  bytesAllocated) ;

/// @brief Method Collect, addr 0x1817392c0, size 0x20, virtual false, abstract: false, final false
static inline void Collect() ;

/// @brief Method CollectionCount, addr 0x1817392e0, size 0x40, virtual false, abstract: false, final false
static inline int32_t CollectionCount(int32_t  generation) ;

/// @brief Method GetCollectionCount, addr 0x181739320, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetCollectionCount(int32_t  generation) ;

/// @brief Method GetMaxGeneration, addr 0x181739330, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetMaxGeneration() ;

/// @brief Method GetMemoryInfo, addr 0x181739340, size 0x20, virtual false, abstract: false, final false
static inline void GetMemoryInfo(::by_ref<uint32_t>  highMemLoadThreshold, ::by_ref<uint64_t>  totalPhysicalMem, ::by_ref<uint32_t>  lastRecordedMemLoad, ::by_ref<::System::UIntPtr>  lastRecordedHeapSize, ::by_ref<::System::UIntPtr>  lastRecordedFragmentation) ;

/// @brief Method InternalCollect, addr 0x181739360, size 0x10, virtual false, abstract: false, final false
static inline void InternalCollect(int32_t  generation) ;

/// @brief Method KeepAlive, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void KeepAlive(::System::Object*  obj) ;

/// @brief Method ReRegisterForFinalize, addr 0x181739370, size 0x30, virtual false, abstract: false, final false
static inline void ReRegisterForFinalize(::System::Object*  obj) ;

/// @brief Method RecordPressure, addr 0x1816172e0, size 0x10, virtual false, abstract: false, final false
static inline void RecordPressure(int64_t  bytesAllocated) ;

/// @brief Method RemoveMemoryPressure, addr 0x1817393a0, size 0x90, virtual false, abstract: false, final false
static inline void RemoveMemoryPressure(int64_t  bytesAllocated) ;

/// @brief Method SuppressFinalize, addr 0x181739430, size 0x30, virtual false, abstract: false, final false
static inline void SuppressFinalize(::System::Object*  obj) ;

/// @brief Method WaitForPendingFinalizers, addr 0x181739460, size 0x10, virtual false, abstract: false, final false
static inline void WaitForPendingFinalizers() ;

/// @brief Method _ReRegisterForFinalize, addr 0x181739470, size 0x10, virtual false, abstract: false, final false
static inline void _ReRegisterForFinalize(::System::Object*  o) ;

/// @brief Method _SuppressFinalize, addr 0x181739480, size 0x10, virtual false, abstract: false, final false
static inline void _SuppressFinalize(::System::Object*  o) ;

static inline ::System::Object* getStaticF_EPHEMERON_TOMBSTONE() ;

/// @brief Method get_MaxGeneration, addr 0x181739330, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_MaxGeneration() ;

/// @brief Method get_ephemeron_tombstone, addr 0x1817394d0, size 0x10, virtual false, abstract: false, final false
static inline ::System::Object* get_ephemeron_tombstone() ;

/// @brief Method register_ephemeron_array, addr 0x1817394e0, size 0x10, virtual false, abstract: false, final false
static inline void register_ephemeron_array(::ArrayW<::System::Runtime::CompilerServices::Ephemeron>  array) ;

static inline void setStaticF_EPHEMERON_TOMBSTONE(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GC", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GC(GC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GC", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GC(GC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::GC) == 0x10, "Size mismatch!");

} // namespace end def System
