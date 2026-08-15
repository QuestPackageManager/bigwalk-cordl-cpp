#pragma once
// IWYU pragma private; include "Rewired/KeyboardMap.hpp"
#include "Rewired/zzzz__ControllerMap_impl.hpp"
#include "Rewired/zzzz__KeyboardMap_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::KeyboardMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::KeyboardMap::*)()>(&::Rewired::KeyboardMap::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819a6eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::KeyboardMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::KeyboardMap::*)(::Rewired::KeyboardMap*)>(&::Rewired::KeyboardMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819a6ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::KeyboardMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::KeyboardMap.fozlDaXsKZdpgKroCGJJOqMmlQyJA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::KeyboardMap::*)(::System::Guid, int32_t, int32_t)>(&::Rewired::KeyboardMap::fozlDaXsKZdpgKroCGJJOqMmlQyJA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819a6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMap*>(),
                        {"fozlDaXsKZdpgKroCGJJOqMmlQyJA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::KeyboardMap.AopcKJJdLxXoLZqEcEziFNPhPkehA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::KeyboardMap* (*)(::System::Guid, int32_t, int32_t)>(&::Rewired::KeyboardMap::AopcKJJdLxXoLZqEcEziFNPhPkehA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819a6e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMap*>(),
                        {"AopcKJJdLxXoLZqEcEziFNPhPkehA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::KeyboardMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::KeyboardMap::_ctor(::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::KeyboardMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::KeyboardMap::fozlDaXsKZdpgKroCGJJOqMmlQyJA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMap*>(),
                        {"fozlDaXsKZdpgKroCGJJOqMmlQyJA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::KeyboardMap* Rewired::KeyboardMap::AopcKJJdLxXoLZqEcEziFNPhPkehA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMap*>(),
                        {"AopcKJJdLxXoLZqEcEziFNPhPkehA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::KeyboardMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::KeyboardMap* Rewired::KeyboardMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::KeyboardMap*>());
}
inline ::Rewired::KeyboardMap* Rewired::KeyboardMap::New_ctor(::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::KeyboardMap*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::KeyboardMap::KeyboardMap()   {
}
