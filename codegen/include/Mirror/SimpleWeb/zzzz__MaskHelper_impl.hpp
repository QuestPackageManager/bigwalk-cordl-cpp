#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/MaskHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__MaskHelper_def.hpp"
#include "System/Security/Cryptography/zzzz__RNGCryptoServiceProvider_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::MaskHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::MaskHelper::*)()>(&::Mirror::SimpleWeb::MaskHelper::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ad1380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MaskHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MaskHelper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::MaskHelper::*)()>(&::Mirror::SimpleWeb::MaskHelper::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad12e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MaskHelper*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MaskHelper.WriteMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::SimpleWeb::MaskHelper::*)(::ArrayW<uint8_t>, int32_t)>(&::Mirror::SimpleWeb::MaskHelper::WriteMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ad1300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MaskHelper*>(),
                        {"WriteMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mirror::SimpleWeb::MaskHelper::__cordl_internal_get_maskBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskBuffer;
}
constexpr ::ArrayW<uint8_t> const& Mirror::SimpleWeb::MaskHelper::__cordl_internal_get_maskBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskBuffer;
}
constexpr void Mirror::SimpleWeb::MaskHelper::__cordl_internal_set_maskBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maskBuffer = value;
}
constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider*& Mirror::SimpleWeb::MaskHelper::__cordl_internal_get_random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider* const& Mirror::SimpleWeb::MaskHelper::__cordl_internal_get_random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr void Mirror::SimpleWeb::MaskHelper::__cordl_internal_set_random(::System::Security::Cryptography::RNGCryptoServiceProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___random = value;
}
inline void Mirror::SimpleWeb::MaskHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MaskHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::MaskHelper::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MaskHelper*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mirror::SimpleWeb::MaskHelper::WriteMask(::ArrayW<uint8_t>  buffer, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MaskHelper*>(),
                        {"WriteMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset);
}
inline ::Mirror::SimpleWeb::MaskHelper* Mirror::SimpleWeb::MaskHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::MaskHelper*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mirror::SimpleWeb::MaskHelper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mirror::SimpleWeb::MaskHelper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::MaskHelper::MaskHelper()   {
}
