#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/FalloffFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Easing_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Noise_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__PaintFalloffArea_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplineArea_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType::FalloffFilter_FilterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType::FalloffFilter_FilterType()   {
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType  JBooth::MicroVerseCore::FalloffFilter_FilterType::Global{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType  JBooth::MicroVerseCore::FalloffFilter_FilterType::Box{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType  JBooth::MicroVerseCore::FalloffFilter_FilterType::Range{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType  JBooth::MicroVerseCore::FalloffFilter_FilterType::Texture{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType  JBooth::MicroVerseCore::FalloffFilter_FilterType::SplineArea{static_cast<int32_t>(0x4)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType  JBooth::MicroVerseCore::FalloffFilter_FilterType::PaintMask{static_cast<int32_t>(0x5)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal::FalloffFilter_FilterTypeNoGlobal(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal::FalloffFilter_FilterTypeNoGlobal()   {
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal::Box{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal::Range{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal::Texture{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal::SplineArea{static_cast<int32_t>(0x4)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal::PaintMask{static_cast<int32_t>(0x5)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask::FalloffFilter_FilterTypeNoPaintMask(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask::FalloffFilter_FilterTypeNoPaintMask()   {
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask::Global{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask::Box{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask::Range{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask::Texture{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask::SplineArea{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask::FalloffFilter_FilterTypeNoGlobalNoPaintMask(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask::FalloffFilter_FilterTypeNoGlobalNoPaintMask()   {
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask::Box{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask::Range{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask::Texture{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask  JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask::SplineArea{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel::FalloffFilter_TextureChannel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel::FalloffFilter_TextureChannel()   {
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  JBooth::MicroVerseCore::FalloffFilter_TextureChannel::R{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  JBooth::MicroVerseCore::FalloffFilter_TextureChannel::G{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  JBooth::MicroVerseCore::FalloffFilter_TextureChannel::B{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  JBooth::MicroVerseCore::FalloffFilter_TextureChannel::A{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size::PaintMask_FalloffFilter_Size(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size::PaintMask_FalloffFilter_Size()   {
}
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size::k64{static_cast<int32_t>(0x40)};
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size::k128{static_cast<int32_t>(0x80)};
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size::k256{static_cast<int32_t>(0x100)};
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size::k512{static_cast<int32_t>(0x200)};
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size::k1024{static_cast<int32_t>(0x400)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode::PaintMask_FalloffFilter_UpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode::PaintMask_FalloffFilter_UpdateMode()   {
}
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode  JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode::EveryChange{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode  JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode::EndStroke{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter_PaintMask.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter_PaintMask::*)()>(&::JBooth::MicroVerseCore::FalloffFilter_PaintMask::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18143bbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter_PaintMask.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter_PaintMask::*)(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size)>(&::JBooth::MicroVerseCore::FalloffFilter_PaintMask::Resize)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18143c230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Resize", {}, {::i2c::type_of<::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter_PaintMask.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter_PaintMask::*)(float_t)>(&::JBooth::MicroVerseCore::FalloffFilter_PaintMask::Fill)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18143bc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Fill", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter_PaintMask.Unpack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter_PaintMask::*)()>(&::JBooth::MicroVerseCore::FalloffFilter_PaintMask::Unpack)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18143cd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Unpack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter_PaintMask.Pack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter_PaintMask::*)()>(&::JBooth::MicroVerseCore::FalloffFilter_PaintMask::Pack)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18143bda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Pack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter_PaintMask.Paint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter_PaintMask::*)(float_t, float_t, float_t, float_t, float_t, float_t, double_t)>(&::JBooth::MicroVerseCore::FalloffFilter_PaintMask::Paint)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18143bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Paint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter_PaintMask.Smooth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter_PaintMask::*)(float_t, float_t, float_t, float_t, float_t, float_t, double_t)>(&::JBooth::MicroVerseCore::FalloffFilter_PaintMask::Smooth)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x18143c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Smooth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter_PaintMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter_PaintMask::*)()>(&::JBooth::MicroVerseCore::FalloffFilter_PaintMask::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18143cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr ::ArrayW<uint8_t>& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_bytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytes;
}
constexpr ::ArrayW<uint8_t> const& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_bytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytes;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_set_bytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bytes = value;
}
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size const& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_set_size(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr bool& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_painting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___painting;
}
constexpr bool const& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_painting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___painting;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_set_painting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___painting = value;
}
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_updateMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMode;
}
constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode const& JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_get_updateMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMode;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter_PaintMask::__cordl_internal_set_updateMode(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateMode = value;
}
inline void JBooth::MicroVerseCore::FalloffFilter_PaintMask::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::FalloffFilter_PaintMask::Resize(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  newSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Resize", {}, {::i2c::type_of<::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSize);
}
inline void JBooth::MicroVerseCore::FalloffFilter_PaintMask::Fill(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Fill", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void JBooth::MicroVerseCore::FalloffFilter_PaintMask::Unpack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Unpack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::FalloffFilter_PaintMask::Pack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Pack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::FalloffFilter_PaintMask::Paint(float_t  x, float_t  y, float_t  brushSize, float_t  brushFalloff, float_t  brushFlow, float_t  targetValue, double_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Paint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, brushSize, brushFalloff, brushFlow, targetValue, deltaTime);
}
inline void JBooth::MicroVerseCore::FalloffFilter_PaintMask::Smooth(float_t  x, float_t  y, float_t  brushSize, float_t  brushFalloff, float_t  brushFlow, float_t  targetValue, double_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {"Smooth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, brushSize, brushFalloff, brushFlow, targetValue, deltaTime);
}
inline void JBooth::MicroVerseCore::FalloffFilter_PaintMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::FalloffFilter_PaintMask* JBooth::MicroVerseCore::FalloffFilter_PaintMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::FalloffFilter_PaintMask*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FalloffFilter_PaintMask::FalloffFilter_PaintMask()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter.GetUseFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::FalloffFilter* (::JBooth::MicroVerseCore::FalloffFilter::*)(::UnityEngine::Transform*)>(&::JBooth::MicroVerseCore::FalloffFilter::GetUseFilter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18142c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter*>(),
                        {"GetUseFilter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter.PrepareTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter::*)(::UnityEngine::Material*, ::UnityEngine::Terrain*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::FalloffFilter::PrepareTerrain)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x18142c8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter*>(),
                        {"PrepareTerrain", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter.PrepareMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter::*)(::UnityEngine::Material*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::StringW>*, ::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::FalloffFilter::PrepareMaterial)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x18142c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffFilter::*)()>(&::JBooth::MicroVerseCore::FalloffFilter::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18142ce60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_filterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterType;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_filterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterType;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_filterType(::JBooth::MicroVerseCore::FalloffFilter_FilterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterType = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_textureChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureChannel;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_textureChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureChannel;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_textureChannel(::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureChannel = value;
}
constexpr ::UnityEngine::Vector2& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_textureParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureParams;
}
constexpr ::UnityEngine::Vector2 const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_textureParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureParams;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_textureParams(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureParams = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_textureRotationScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureRotationScale;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_textureRotationScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureRotationScale;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_textureRotationScale(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureRotationScale = value;
}
constexpr bool& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_clampTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampTexture;
}
constexpr bool const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_clampTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampTexture;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_clampTexture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clampTexture = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::SplineArea>& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_splineArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineArea;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::SplineArea> const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_splineArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineArea;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_splineArea(::UnityW<::JBooth::MicroVerseCore::SplineArea>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineArea = value;
}
constexpr float_t& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_splineAreaFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineAreaFalloff;
}
constexpr float_t const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_splineAreaFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineAreaFalloff;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_splineAreaFalloff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineAreaFalloff = value;
}
constexpr float_t& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_splineAreaFalloffBoost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineAreaFalloffBoost;
}
constexpr float_t const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_splineAreaFalloffBoost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineAreaFalloffBoost;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_splineAreaFalloffBoost(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineAreaFalloffBoost = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::PaintFalloffArea>& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_paintArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintArea;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::PaintFalloffArea> const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_paintArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintArea;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_paintArea(::UnityW<::JBooth::MicroVerseCore::PaintFalloffArea>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintArea = value;
}
constexpr ::JBooth::MicroVerseCore::Easing*& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_easing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___easing;
}
constexpr ::JBooth::MicroVerseCore::Easing* const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_easing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___easing;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_easing(::JBooth::MicroVerseCore::Easing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___easing = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_noise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_noise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_noise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noise = value;
}
constexpr ::UnityEngine::Vector2& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_falloffRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffRange;
}
constexpr ::UnityEngine::Vector2 const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_falloffRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffRange;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_falloffRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloffRange = value;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_PaintMask*& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_paintMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintMask;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_PaintMask* const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_paintMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintMask;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_paintMask(::JBooth::MicroVerseCore::FalloffFilter_PaintMask*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintMask = value;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter*& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_useFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useFilter;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_get_useFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useFilter;
}
constexpr void JBooth::MicroVerseCore::FalloffFilter::__cordl_internal_set_useFilter(::JBooth::MicroVerseCore::FalloffFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useFilter = value;
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__Falloff(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Falloff", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__Falloff()  {
return ::cordl_internals::getStaticField<int32_t, "_Falloff", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__FalloffTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FalloffTexture", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__FalloffTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_FalloffTexture", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__FalloffTextureChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FalloffTextureChannel", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__FalloffTextureChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_FalloffTextureChannel", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__FalloffTextureParams(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FalloffTextureParams", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__FalloffTextureParams()  {
return ::cordl_internals::getStaticField<int32_t, "_FalloffTextureParams", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__FalloffTextureRotScale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FalloffTextureRotScale", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__FalloffTextureRotScale()  {
return ::cordl_internals::getStaticField<int32_t, "_FalloffTextureRotScale", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__FalloffAreaRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FalloffAreaRange", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__FalloffAreaRange()  {
return ::cordl_internals::getStaticField<int32_t, "_FalloffAreaRange", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__FalloffAreaBoost(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FalloffAreaBoost", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__FalloffAreaBoost()  {
return ::cordl_internals::getStaticField<int32_t, "_FalloffAreaBoost", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__PaintAreaMatrix(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PaintAreaMatrix", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__PaintAreaMatrix()  {
return ::cordl_internals::getStaticField<int32_t, "_PaintAreaMatrix", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__PaintAreaFalloffTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PaintAreaFalloffTexture", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__PaintAreaFalloffTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_PaintAreaFalloffTexture", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__PaintAreaClamp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PaintAreaClamp", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__PaintAreaClamp()  {
return ::cordl_internals::getStaticField<int32_t, "_PaintAreaClamp", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
inline void JBooth::MicroVerseCore::FalloffFilter::setStaticF__TerrainSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TerrainSize", ::JBooth::MicroVerseCore::FalloffFilter*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FalloffFilter::getStaticF__TerrainSize()  {
return ::cordl_internals::getStaticField<int32_t, "_TerrainSize", ::JBooth::MicroVerseCore::FalloffFilter*>();
}
template<typename TSource,typename TTarget>
inline TTarget JBooth::MicroVerseCore::FalloffFilter::CastEnum(TSource  source, TTarget  fallback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter*>(),
                    {"CastEnum", {::i2c::class_of<TSource>(), ::i2c::class_of<TTarget>()}, {::i2c::type_of<TSource>(), ::i2c::type_of<TTarget>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TTarget>()}
                )));
return ::cordl_internals::RunMethodRethrow<TTarget>(nullptr, ___internal_method, source, fallback);
}
inline ::JBooth::MicroVerseCore::FalloffFilter* JBooth::MicroVerseCore::FalloffFilter::GetUseFilter(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter*>(),
                        {"GetUseFilter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::FalloffFilter*>(this, ___internal_method, transform);
}
inline void JBooth::MicroVerseCore::FalloffFilter::PrepareTerrain(::UnityEngine::Material*  mat, ::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter*>(),
                        {"PrepareTerrain", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, terrain, transform, keywords);
}
inline void JBooth::MicroVerseCore::FalloffFilter::PrepareMaterial(::UnityEngine::Material*  mat, ::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::StringW>*  keywords, ::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, transform, keywords, terrain);
}
inline void JBooth::MicroVerseCore::FalloffFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::FalloffFilter* JBooth::MicroVerseCore::FalloffFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::FalloffFilter*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FalloffFilter::FalloffFilter()   {
}
