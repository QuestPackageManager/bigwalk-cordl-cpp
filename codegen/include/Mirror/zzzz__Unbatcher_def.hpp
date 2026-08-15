#pragma once
// IWYU pragma private; include "Mirror/Unbatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Unbatcher)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriterPooled;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Mirror {
class Unbatcher;
}
// Write type traits
MARK_REF_T(::Mirror::Unbatcher*);
DEFINE_IL2CPP_CLASS(::Mirror::Unbatcher*, "Mirror", "Unbatcher");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.Unbatcher
class CORDL_TYPE Unbatcher : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BatchesCount)) int32_t  BatchesCount;

/// @brief Field batches, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_batches, put=__cordl_internal_set_batches)) ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  batches;

/// @brief Field reader, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::Mirror::NetworkReader*  reader;

/// @brief Field readerRemoteTimeStamp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_readerRemoteTimeStamp, put=__cordl_internal_set_readerRemoteTimeStamp)) double_t  readerRemoteTimeStamp;

/// @brief Method AddBatch, addr 0x181552940, size 0x100, virtual false, abstract: false, final false
inline bool AddBatch(::System::ArraySegment_1<uint8_t>  batch) ;

/// @brief Method GetNextMessage, addr 0x181552a40, size 0xe0, virtual false, abstract: false, final false
inline bool GetNextMessage(::by_ref<::Mirror::NetworkReader*>  message, ::by_ref<double_t>  remoteTimeStamp) ;

static inline ::Mirror::Unbatcher* New_ctor() ;

/// @brief Method StartReadingBatch, addr 0x181552b20, size 0x90, virtual false, abstract: false, final false
inline void StartReadingBatch(::Mirror::NetworkWriterPooled*  batch) ;

constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>* const& __cordl_internal_get_batches() const;

constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*& __cordl_internal_get_batches() ;

constexpr ::Mirror::NetworkReader* const& __cordl_internal_get_reader() const;

constexpr ::Mirror::NetworkReader*& __cordl_internal_get_reader() ;

constexpr double_t const& __cordl_internal_get_readerRemoteTimeStamp() const;

constexpr double_t& __cordl_internal_get_readerRemoteTimeStamp() ;

constexpr void __cordl_internal_set_batches(::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  value) ;

constexpr void __cordl_internal_set_reader(::Mirror::NetworkReader*  value) ;

constexpr void __cordl_internal_set_readerRemoteTimeStamp(double_t  value) ;

/// @brief Method .ctor, addr 0x181552bb0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BatchesCount, addr 0x1804828f0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_BatchesCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Unbatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Unbatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Unbatcher(Unbatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Unbatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Unbatcher(Unbatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18271};

/// @brief Field batches, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  ___batches;

/// @brief Field reader, offset: 0x18, size: 0x8, def value: None
 ::Mirror::NetworkReader*  ___reader;

/// @brief Field readerRemoteTimeStamp, offset: 0x20, size: 0x8, def value: None
 double_t  ___readerRemoteTimeStamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Unbatcher, ___batches) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Unbatcher, ___reader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Unbatcher, ___readerRemoteTimeStamp) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::Unbatcher) == 0x28, "Size mismatch!");

} // namespace end def Mirror
