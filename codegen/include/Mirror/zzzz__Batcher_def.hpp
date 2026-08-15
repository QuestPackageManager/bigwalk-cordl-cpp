#pragma once
// IWYU pragma private; include "Mirror/Batcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Batcher)
namespace Mirror {
class NetworkWriterPooled;
}
namespace Mirror {
class NetworkWriter;
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
class Batcher;
}
// Write type traits
MARK_REF_T(::Mirror::Batcher*);
DEFINE_IL2CPP_CLASS(::Mirror::Batcher*, "Mirror", "Batcher");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.Batcher
class CORDL_TYPE Batcher : public ::System::Object {
public:
// Declarations
/// @brief Field batch, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_batch, put=__cordl_internal_set_batch)) ::Mirror::NetworkWriterPooled*  batch;

/// @brief Field batches, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_batches, put=__cordl_internal_set_batches)) ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  batches;

/// @brief Field threshold, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_threshold, put=__cordl_internal_set_threshold)) int32_t  threshold;

/// @brief Method AddMessage, addr 0x181535ad0, size 0xd0, virtual false, abstract: false, final false
inline void AddMessage(::System::ArraySegment_1<uint8_t>  message, double_t  timeStamp) ;

/// @brief Method CopyAndReturn, addr 0x181535ba0, size 0xa0, virtual false, abstract: false, final false
static inline void CopyAndReturn(::Mirror::NetworkWriterPooled*  batch, ::Mirror::NetworkWriter*  writer) ;

/// @brief Method GetBatch, addr 0x181535c40, size 0x150, virtual false, abstract: false, final false
inline bool GetBatch(::Mirror::NetworkWriter*  writer) ;

static inline ::Mirror::Batcher* New_ctor(int32_t  threshold) ;

constexpr ::Mirror::NetworkWriterPooled* const& __cordl_internal_get_batch() const;

constexpr ::Mirror::NetworkWriterPooled*& __cordl_internal_get_batch() ;

constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>* const& __cordl_internal_get_batches() const;

constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*& __cordl_internal_get_batches() ;

constexpr int32_t const& __cordl_internal_get_threshold() const;

constexpr int32_t& __cordl_internal_get_threshold() ;

constexpr void __cordl_internal_set_batch(::Mirror::NetworkWriterPooled*  value) ;

constexpr void __cordl_internal_set_batches(::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  value) ;

constexpr void __cordl_internal_set_threshold(int32_t  value) ;

/// @brief Method .ctor, addr 0x181535d90, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  threshold) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Batcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Batcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Batcher(Batcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Batcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Batcher(Batcher const& ) = delete;

/// @brief Field HeaderSize offset 0xffffffff size 0x4
static constexpr int32_t  HeaderSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18270};

/// @brief Field threshold, offset: 0x10, size: 0x4, def value: None
 int32_t  ___threshold;

/// @brief Field batches, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  ___batches;

/// @brief Field batch, offset: 0x20, size: 0x8, def value: None
 ::Mirror::NetworkWriterPooled*  ___batch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Batcher, ___threshold) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Batcher, ___batches) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Batcher, ___batch) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::Batcher) == 0x28, "Size mismatch!");

} // namespace end def Mirror
