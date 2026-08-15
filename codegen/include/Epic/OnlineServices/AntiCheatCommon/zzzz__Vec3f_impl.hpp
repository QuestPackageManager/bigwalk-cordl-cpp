#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/Vec3f.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::Vec3f.get_x
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Epic::OnlineServices::AntiCheatCommon::Vec3f::*)()>(&::Epic::OnlineServices::AntiCheatCommon::Vec3f::get_x)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d56c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"get_x", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::Vec3f.set_x
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::Vec3f::*)(float_t)>(&::Epic::OnlineServices::AntiCheatCommon::Vec3f::set_x)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"set_x", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::Vec3f.get_y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Epic::OnlineServices::AntiCheatCommon::Vec3f::*)()>(&::Epic::OnlineServices::AntiCheatCommon::Vec3f::get_y)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d56e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"get_y", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::Vec3f.set_y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::Vec3f::*)(float_t)>(&::Epic::OnlineServices::AntiCheatCommon::Vec3f::set_y)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"set_y", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::Vec3f.get_z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Epic::OnlineServices::AntiCheatCommon::Vec3f::*)()>(&::Epic::OnlineServices::AntiCheatCommon::Vec3f::get_z)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"get_z", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::Vec3f.set_z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::Vec3f::*)(float_t)>(&::Epic::OnlineServices::AntiCheatCommon::Vec3f::set_z)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"set_z", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Epic::OnlineServices::AntiCheatCommon::Vec3f::get_x()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"get_x", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::Vec3f::set_x(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"set_x", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Epic::OnlineServices::AntiCheatCommon::Vec3f::get_y()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"get_y", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::Vec3f::set_y(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"set_y", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Epic::OnlineServices::AntiCheatCommon::Vec3f::get_z()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"get_z", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::Vec3f::set_z(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::Vec3f>(),
                        {"set_z", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_x_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_y_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_z_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::Vec3f::Vec3f(float_t  _x_k__BackingField, float_t  _y_k__BackingField, float_t  _z_k__BackingField) noexcept  {
this->_x_k__BackingField = _x_k__BackingField;
this->_y_k__BackingField = _y_k__BackingField;
this->_z_k__BackingField = _z_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::Vec3f::Vec3f()   {
}
