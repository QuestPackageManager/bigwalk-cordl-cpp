#pragma once
// IWYU pragma private; include "AmplifyImpostors/TextureOutput.hpp"
#include "AmplifyImpostors/zzzz__ImageFormat_impl.hpp"
#include "AmplifyImpostors/zzzz__OverrideMask_impl.hpp"
#include "AmplifyImpostors/zzzz__TextureChannels_impl.hpp"
#include "AmplifyImpostors/zzzz__TextureCompression_impl.hpp"
#include "AmplifyImpostors/zzzz__TextureScale_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AmplifyImpostors/zzzz__TextureOutput_def.hpp"
#include "AmplifyImpostors/zzzz__ImageFormat_def.hpp"
#include "AmplifyImpostors/zzzz__TextureChannels_def.hpp"
#include "AmplifyImpostors/zzzz__TextureCompression_def.hpp"
#include "AmplifyImpostors/zzzz__TextureScale_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::TextureOutput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::TextureOutput::*)()>(&::AmplifyImpostors::TextureOutput::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802dab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::TextureOutput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::TextureOutput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::TextureOutput::*)(bool, ::StringW, ::AmplifyImpostors::TextureScale, bool, ::AmplifyImpostors::TextureChannels, ::AmplifyImpostors::TextureCompression, ::AmplifyImpostors::ImageFormat)>(&::AmplifyImpostors::TextureOutput::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802daba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::TextureOutput*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::AmplifyImpostors::TextureScale>(), ::i2c::type_of<bool>(), ::i2c::type_of<::AmplifyImpostors::TextureChannels>(), ::i2c::type_of<::AmplifyImpostors::TextureCompression>(), ::i2c::type_of<::AmplifyImpostors::ImageFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::TextureOutput.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::AmplifyImpostors::TextureOutput* (::AmplifyImpostors::TextureOutput::*)()>(&::AmplifyImpostors::TextureOutput::Clone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802dab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::TextureOutput*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& AmplifyImpostors::TextureOutput::__cordl_internal_get_Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr int32_t const& AmplifyImpostors::TextureOutput::__cordl_internal_get_Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr void AmplifyImpostors::TextureOutput::__cordl_internal_set_Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Index = value;
}
constexpr ::AmplifyImpostors::OverrideMask& AmplifyImpostors::TextureOutput::__cordl_internal_get_OverrideMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideMask;
}
constexpr ::AmplifyImpostors::OverrideMask const& AmplifyImpostors::TextureOutput::__cordl_internal_get_OverrideMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideMask;
}
constexpr void AmplifyImpostors::TextureOutput::__cordl_internal_set_OverrideMask(::AmplifyImpostors::OverrideMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideMask = value;
}
constexpr bool& AmplifyImpostors::TextureOutput::__cordl_internal_get_Active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Active;
}
constexpr bool const& AmplifyImpostors::TextureOutput::__cordl_internal_get_Active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Active;
}
constexpr void AmplifyImpostors::TextureOutput::__cordl_internal_set_Active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Active = value;
}
constexpr ::StringW& AmplifyImpostors::TextureOutput::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& AmplifyImpostors::TextureOutput::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void AmplifyImpostors::TextureOutput::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::AmplifyImpostors::TextureScale& AmplifyImpostors::TextureOutput::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr ::AmplifyImpostors::TextureScale const& AmplifyImpostors::TextureOutput::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void AmplifyImpostors::TextureOutput::__cordl_internal_set_Scale(::AmplifyImpostors::TextureScale  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scale = value;
}
constexpr bool& AmplifyImpostors::TextureOutput::__cordl_internal_get_SRGB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SRGB;
}
constexpr bool const& AmplifyImpostors::TextureOutput::__cordl_internal_get_SRGB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SRGB;
}
constexpr void AmplifyImpostors::TextureOutput::__cordl_internal_set_SRGB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SRGB = value;
}
constexpr ::AmplifyImpostors::TextureChannels& AmplifyImpostors::TextureOutput::__cordl_internal_get_Channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Channels;
}
constexpr ::AmplifyImpostors::TextureChannels const& AmplifyImpostors::TextureOutput::__cordl_internal_get_Channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Channels;
}
constexpr void AmplifyImpostors::TextureOutput::__cordl_internal_set_Channels(::AmplifyImpostors::TextureChannels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Channels = value;
}
constexpr ::AmplifyImpostors::TextureCompression& AmplifyImpostors::TextureOutput::__cordl_internal_get_Compression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Compression;
}
constexpr ::AmplifyImpostors::TextureCompression const& AmplifyImpostors::TextureOutput::__cordl_internal_get_Compression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Compression;
}
constexpr void AmplifyImpostors::TextureOutput::__cordl_internal_set_Compression(::AmplifyImpostors::TextureCompression  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Compression = value;
}
constexpr ::AmplifyImpostors::ImageFormat& AmplifyImpostors::TextureOutput::__cordl_internal_get_ImageFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageFormat;
}
constexpr ::AmplifyImpostors::ImageFormat const& AmplifyImpostors::TextureOutput::__cordl_internal_get_ImageFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageFormat;
}
constexpr void AmplifyImpostors::TextureOutput::__cordl_internal_set_ImageFormat(::AmplifyImpostors::ImageFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImageFormat = value;
}
inline void AmplifyImpostors::TextureOutput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::TextureOutput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void AmplifyImpostors::TextureOutput::_ctor(bool  a, ::StringW  n, ::AmplifyImpostors::TextureScale  s, bool  sr, ::AmplifyImpostors::TextureChannels  c, ::AmplifyImpostors::TextureCompression  nc, ::AmplifyImpostors::ImageFormat  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::TextureOutput*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::AmplifyImpostors::TextureScale>(), ::i2c::type_of<bool>(), ::i2c::type_of<::AmplifyImpostors::TextureChannels>(), ::i2c::type_of<::AmplifyImpostors::TextureCompression>(), ::i2c::type_of<::AmplifyImpostors::ImageFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, n, s, sr, c, nc, i);
}
inline ::AmplifyImpostors::TextureOutput* AmplifyImpostors::TextureOutput::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::TextureOutput*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::AmplifyImpostors::TextureOutput*>(this, ___internal_method);
}
inline ::AmplifyImpostors::TextureOutput* AmplifyImpostors::TextureOutput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AmplifyImpostors::TextureOutput*>());
}
inline ::AmplifyImpostors::TextureOutput* AmplifyImpostors::TextureOutput::New_ctor(bool  a, ::StringW  n, ::AmplifyImpostors::TextureScale  s, bool  sr, ::AmplifyImpostors::TextureChannels  c, ::AmplifyImpostors::TextureCompression  nc, ::AmplifyImpostors::ImageFormat  i)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AmplifyImpostors::TextureOutput*>(a, n, s, sr, c, nc, i));
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::TextureOutput::TextureOutput()   {
}
