#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/BufferPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/SimpleWeb/zzzz__BufferBucket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferPool)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class BufferPool;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::BufferPool*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::BufferPool*, "Mirror.SimpleWeb", "BufferPool");
// Dependencies Mirror.SimpleWeb.BufferBucket, System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.BufferPool
class CORDL_TYPE BufferPool : public ::System::Object {
public:
// Declarations
/// @brief Field bucketCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_bucketCount, put=__cordl_internal_set_bucketCount)) int32_t  bucketCount;

/// @brief Field buckets, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buckets, put=__cordl_internal_set_buckets)) ::ArrayW<::Mirror::SimpleWeb::BufferBucket*>  buckets;

/// @brief Field largest, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_largest, put=__cordl_internal_set_largest)) int32_t  largest;

/// @brief Field smallest, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_smallest, put=__cordl_internal_set_smallest)) int32_t  smallest;

static inline ::Mirror::SimpleWeb::BufferPool* New_ctor(int32_t  bucketCount, int32_t  smallest, int32_t  largest) ;

/// @brief Method Take, addr 0x181acf8b0, size 0x160, virtual false, abstract: false, final false
inline ::Mirror::SimpleWeb::ArrayBuffer* Take(int32_t  size) ;

/// @brief Method Validate, addr 0x181acfa10, size 0x30, virtual false, abstract: false, final false
inline void Validate() ;

constexpr int32_t const& __cordl_internal_get_bucketCount() const;

constexpr int32_t& __cordl_internal_get_bucketCount() ;

constexpr ::ArrayW<::Mirror::SimpleWeb::BufferBucket*> const& __cordl_internal_get_buckets() const;

constexpr ::ArrayW<::Mirror::SimpleWeb::BufferBucket*>& __cordl_internal_get_buckets() ;

constexpr int32_t const& __cordl_internal_get_largest() const;

constexpr int32_t& __cordl_internal_get_largest() ;

constexpr int32_t const& __cordl_internal_get_smallest() const;

constexpr int32_t& __cordl_internal_get_smallest() ;

constexpr void __cordl_internal_set_bucketCount(int32_t  value) ;

constexpr void __cordl_internal_set_buckets(::ArrayW<::Mirror::SimpleWeb::BufferBucket*>  value) ;

constexpr void __cordl_internal_set_largest(int32_t  value) ;

constexpr void __cordl_internal_set_smallest(int32_t  value) ;

/// @brief Method .ctor, addr 0x181acfa40, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor(int32_t  bucketCount, int32_t  smallest, int32_t  largest) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferPool(BufferPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferPool(BufferPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20521};

/// @brief Field buckets, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Mirror::SimpleWeb::BufferBucket*>  ___buckets;

/// @brief Field bucketCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___bucketCount;

/// @brief Field smallest, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___smallest;

/// @brief Field largest, offset: 0x20, size: 0x4, def value: None
 int32_t  ___largest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::BufferPool, ___buckets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::BufferPool, ___bucketCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::BufferPool, ___smallest) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::BufferPool, ___largest) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::BufferPool) == 0x28, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
