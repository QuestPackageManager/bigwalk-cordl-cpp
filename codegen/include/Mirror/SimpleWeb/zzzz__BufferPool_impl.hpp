#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/BufferPool.hpp"
#include "Mirror/SimpleWeb/zzzz__BufferBucket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__BufferPool_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::BufferPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::BufferPool::*)(int32_t, int32_t, int32_t)>(&::Mirror::SimpleWeb::BufferPool::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181acfa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferPool*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::BufferPool.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::BufferPool::*)()>(&::Mirror::SimpleWeb::BufferPool::Validate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181acfa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferPool*>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::BufferPool.Take
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::ArrayBuffer* (::Mirror::SimpleWeb::BufferPool::*)(int32_t)>(&::Mirror::SimpleWeb::BufferPool::Take)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181acf8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferPool*>(),
                        {"Take", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Mirror::SimpleWeb::BufferBucket*>& Mirror::SimpleWeb::BufferPool::__cordl_internal_get_buckets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buckets;
}
constexpr ::ArrayW<::Mirror::SimpleWeb::BufferBucket*> const& Mirror::SimpleWeb::BufferPool::__cordl_internal_get_buckets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buckets;
}
constexpr void Mirror::SimpleWeb::BufferPool::__cordl_internal_set_buckets(::ArrayW<::Mirror::SimpleWeb::BufferBucket*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buckets = value;
}
constexpr int32_t& Mirror::SimpleWeb::BufferPool::__cordl_internal_get_bucketCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bucketCount;
}
constexpr int32_t const& Mirror::SimpleWeb::BufferPool::__cordl_internal_get_bucketCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bucketCount;
}
constexpr void Mirror::SimpleWeb::BufferPool::__cordl_internal_set_bucketCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bucketCount = value;
}
constexpr int32_t& Mirror::SimpleWeb::BufferPool::__cordl_internal_get_smallest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallest;
}
constexpr int32_t const& Mirror::SimpleWeb::BufferPool::__cordl_internal_get_smallest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallest;
}
constexpr void Mirror::SimpleWeb::BufferPool::__cordl_internal_set_smallest(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallest = value;
}
constexpr int32_t& Mirror::SimpleWeb::BufferPool::__cordl_internal_get_largest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largest;
}
constexpr int32_t const& Mirror::SimpleWeb::BufferPool::__cordl_internal_get_largest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largest;
}
constexpr void Mirror::SimpleWeb::BufferPool::__cordl_internal_set_largest(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___largest = value;
}
inline void Mirror::SimpleWeb::BufferPool::_ctor(int32_t  bucketCount, int32_t  smallest, int32_t  largest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferPool*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bucketCount, smallest, largest);
}
inline void Mirror::SimpleWeb::BufferPool::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferPool*>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::ArrayBuffer* Mirror::SimpleWeb::BufferPool::Take(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferPool*>(),
                        {"Take", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::ArrayBuffer*>(this, ___internal_method, size);
}
inline ::Mirror::SimpleWeb::BufferPool* Mirror::SimpleWeb::BufferPool::New_ctor(int32_t  bucketCount, int32_t  smallest, int32_t  largest)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::BufferPool*>(bucketCount, smallest, largest));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::BufferPool::BufferPool()   {
}
