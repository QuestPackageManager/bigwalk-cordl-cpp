#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/BufferBucket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__BufferBucket_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__IBufferOwner_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::BufferBucket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::BufferBucket::*)(int32_t)>(&::Mirror::SimpleWeb::BufferBucket::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181acf860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::BufferBucket.Take
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::ArrayBuffer* (::Mirror::SimpleWeb::BufferBucket::*)()>(&::Mirror::SimpleWeb::BufferBucket::Take)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181acf7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {"Take", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::BufferBucket.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::BufferBucket::*)(::Mirror::SimpleWeb::ArrayBuffer*)>(&::Mirror::SimpleWeb::BufferBucket::Return)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181acf790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {"Return", {}, {::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::BufferBucket.IncrementCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::BufferBucket::*)()>(&::Mirror::SimpleWeb::BufferBucket::IncrementCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181acf780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {"IncrementCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::BufferBucket.DecrementCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::BufferBucket::*)()>(&::Mirror::SimpleWeb::BufferBucket::DecrementCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181acf770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {"DecrementCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::SimpleWeb::BufferBucket::__cordl_internal_get_arraySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arraySize;
}
constexpr int32_t const& Mirror::SimpleWeb::BufferBucket::__cordl_internal_get_arraySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arraySize;
}
constexpr void Mirror::SimpleWeb::BufferBucket::__cordl_internal_set_arraySize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arraySize = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*& Mirror::SimpleWeb::BufferBucket::__cordl_internal_get_buffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffers;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>* const& Mirror::SimpleWeb::BufferBucket::__cordl_internal_get_buffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffers;
}
constexpr void Mirror::SimpleWeb::BufferBucket::__cordl_internal_set_buffers(::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffers = value;
}
constexpr int32_t& Mirror::SimpleWeb::BufferBucket::__cordl_internal_get__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr int32_t const& Mirror::SimpleWeb::BufferBucket::__cordl_internal_get__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr void Mirror::SimpleWeb::BufferBucket::__cordl_internal_set__current(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current = value;
}
inline void Mirror::SimpleWeb::BufferBucket::_ctor(int32_t  arraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arraySize);
}
inline ::Mirror::SimpleWeb::ArrayBuffer* Mirror::SimpleWeb::BufferBucket::Take()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {"Take", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::ArrayBuffer*>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::BufferBucket::Return(::Mirror::SimpleWeb::ArrayBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {"Return", {}, {::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void Mirror::SimpleWeb::BufferBucket::IncrementCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {"IncrementCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::BufferBucket::DecrementCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::BufferBucket*>(),
                        {"DecrementCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::BufferBucket* Mirror::SimpleWeb::BufferBucket::New_ctor(int32_t  arraySize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::BufferBucket*>(arraySize));
}
/// @brief Convert operator to "::Mirror::SimpleWeb::IBufferOwner"
constexpr  Mirror::SimpleWeb::BufferBucket::operator ::Mirror::SimpleWeb::IBufferOwner*() noexcept {
return static_cast<::Mirror::SimpleWeb::IBufferOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mirror::SimpleWeb::IBufferOwner"
constexpr ::Mirror::SimpleWeb::IBufferOwner* Mirror::SimpleWeb::BufferBucket::i___Mirror__SimpleWeb__IBufferOwner() noexcept {
return static_cast<::Mirror::SimpleWeb::IBufferOwner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::BufferBucket::BufferBucket()   {
}
