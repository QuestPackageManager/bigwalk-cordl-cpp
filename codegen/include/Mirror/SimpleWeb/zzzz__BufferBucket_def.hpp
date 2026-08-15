#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/BufferBucket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferBucket)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
namespace Mirror::SimpleWeb {
class IBufferOwner;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class BufferBucket;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::BufferBucket*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::BufferBucket*, "Mirror.SimpleWeb", "BufferBucket");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.BufferBucket
class CORDL_TYPE BufferBucket : public ::System::Object {
public:
// Declarations
/// @brief Field _current, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__current, put=__cordl_internal_set__current)) int32_t  _current;

/// @brief Field arraySize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_arraySize, put=__cordl_internal_set_arraySize)) int32_t  arraySize;

/// @brief Field buffers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffers, put=__cordl_internal_set_buffers)) ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*  buffers;

/// @brief Convert operator to "::Mirror::SimpleWeb::IBufferOwner"
constexpr operator  ::Mirror::SimpleWeb::IBufferOwner*() noexcept;

/// @brief Method DecrementCreated, addr 0x181acf770, size 0x10, virtual false, abstract: false, final false
inline void DecrementCreated() ;

/// @brief Method IncrementCreated, addr 0x181acf780, size 0x10, virtual false, abstract: false, final false
inline void IncrementCreated() ;

static inline ::Mirror::SimpleWeb::BufferBucket* New_ctor(int32_t  arraySize) ;

/// @brief Method Return, addr 0x181acf790, size 0x30, virtual true, abstract: false, final true
inline void Return(::Mirror::SimpleWeb::ArrayBuffer*  buffer) ;

/// @brief Method Take, addr 0x181acf7c0, size 0xa0, virtual false, abstract: false, final false
inline ::Mirror::SimpleWeb::ArrayBuffer* Take() ;

constexpr int32_t const& __cordl_internal_get__current() const;

constexpr int32_t& __cordl_internal_get__current() ;

constexpr int32_t const& __cordl_internal_get_arraySize() const;

constexpr int32_t& __cordl_internal_get_arraySize() ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>* const& __cordl_internal_get_buffers() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*& __cordl_internal_get_buffers() ;

constexpr void __cordl_internal_set__current(int32_t  value) ;

constexpr void __cordl_internal_set_arraySize(int32_t  value) ;

constexpr void __cordl_internal_set_buffers(::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*  value) ;

/// @brief Method .ctor, addr 0x181acf860, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  arraySize) ;

/// @brief Convert to "::Mirror::SimpleWeb::IBufferOwner"
constexpr ::Mirror::SimpleWeb::IBufferOwner* i___Mirror__SimpleWeb__IBufferOwner() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferBucket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferBucket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferBucket(BufferBucket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferBucket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferBucket(BufferBucket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20520};

/// @brief Field arraySize, offset: 0x10, size: 0x4, def value: None
 int32_t  ___arraySize;

/// @brief Field buffers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*  ___buffers;

/// @brief Field _current, offset: 0x20, size: 0x4, def value: None
 int32_t  ____current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::BufferBucket, ___arraySize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::BufferBucket, ___buffers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::BufferBucket, ____current) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::BufferBucket) == 0x28, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
