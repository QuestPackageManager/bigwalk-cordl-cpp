#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ArrayBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__IBufferOwner_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::SimpleWeb::ArrayBuffer::*)()>(&::Mirror::SimpleWeb::ArrayBuffer::get_count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"get_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.set_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)(int32_t)>(&::Mirror::SimpleWeb::ArrayBuffer::set_count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"set_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.SetReleasesRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)(int32_t)>(&::Mirror::SimpleWeb::ArrayBuffer::SetReleasesRequired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"SetReleasesRequired", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)(::Mirror::SimpleWeb::IBufferOwner*, int32_t)>(&::Mirror::SimpleWeb::ArrayBuffer::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181acf720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::IBufferOwner*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)()>(&::Mirror::SimpleWeb::ArrayBuffer::Release)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181acf610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)()>(&::Mirror::SimpleWeb::ArrayBuffer::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181acf600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)(::ArrayW<uint8_t>, int32_t)>(&::Mirror::SimpleWeb::ArrayBuffer::CopyTo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acf5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)(::System::ArraySegment_1<uint8_t>)>(&::Mirror::SimpleWeb::ArrayBuffer::CopyFrom)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acf480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::SimpleWeb::ArrayBuffer::CopyFrom)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acf4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)(::System::IntPtr, int32_t)>(&::Mirror::SimpleWeb::ArrayBuffer::CopyFrom)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acf540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.ToSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Mirror::SimpleWeb::ArrayBuffer::*)()>(&::Mirror::SimpleWeb::ArrayBuffer::ToSegment)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181acf6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"ToSegment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ArrayBuffer.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ArrayBuffer::*)(int32_t)>(&::Mirror::SimpleWeb::ArrayBuffer::Validate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181acf700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"Validate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SimpleWeb::IBufferOwner*& Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::Mirror::SimpleWeb::IBufferOwner* const& Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_set_owner(::Mirror::SimpleWeb::IBufferOwner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
constexpr ::ArrayW<uint8_t>& Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_get_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
constexpr ::ArrayW<uint8_t> const& Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_get_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
constexpr void Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_set_array(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___array = value;
}
constexpr int32_t& Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_get__count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count_k__BackingField;
}
constexpr int32_t const& Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_get__count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count_k__BackingField;
}
constexpr void Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_set__count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count_k__BackingField = value;
}
constexpr int32_t& Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_get_releasesRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releasesRequired;
}
constexpr int32_t const& Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_get_releasesRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releasesRequired;
}
constexpr void Mirror::SimpleWeb::ArrayBuffer::__cordl_internal_set_releasesRequired(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releasesRequired = value;
}
inline int32_t Mirror::SimpleWeb::ArrayBuffer::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::ArrayBuffer::set_count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"set_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::ArrayBuffer::SetReleasesRequired(int32_t  required)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"SetReleasesRequired", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, required);
}
inline void Mirror::SimpleWeb::ArrayBuffer::_ctor(::Mirror::SimpleWeb::IBufferOwner*  owner, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::IBufferOwner*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, size);
}
inline void Mirror::SimpleWeb::ArrayBuffer::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::ArrayBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::ArrayBuffer::CopyTo(::ArrayW<uint8_t>  target, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, offset);
}
inline void Mirror::SimpleWeb::ArrayBuffer::CopyFrom(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline void Mirror::SimpleWeb::ArrayBuffer::CopyFrom(::ArrayW<uint8_t>  source, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, offset, length);
}
inline void Mirror::SimpleWeb::ArrayBuffer::CopyFrom(::System::IntPtr  bufferPtr, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferPtr, length);
}
inline ::System::ArraySegment_1<uint8_t> Mirror::SimpleWeb::ArrayBuffer::ToSegment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"ToSegment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::ArrayBuffer::Validate(int32_t  arraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ArrayBuffer*>(),
                        {"Validate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arraySize);
}
inline ::Mirror::SimpleWeb::ArrayBuffer* Mirror::SimpleWeb::ArrayBuffer::New_ctor(::Mirror::SimpleWeb::IBufferOwner*  owner, int32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::ArrayBuffer*>(owner, size));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mirror::SimpleWeb::ArrayBuffer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mirror::SimpleWeb::ArrayBuffer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ArrayBuffer::ArrayBuffer()   {
}
