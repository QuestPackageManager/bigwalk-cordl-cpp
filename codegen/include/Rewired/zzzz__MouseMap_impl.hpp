#pragma once
// IWYU pragma private; include "Rewired/MouseMap.hpp"
#include "Rewired/zzzz__ControllerMapWithAxes_impl.hpp"
#include "Rewired/zzzz__MouseMap_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::MouseMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseMap::*)()>(&::Rewired::MouseMap::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a6f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseMap::*)(::Rewired::MouseMap*)>(&::Rewired::MouseMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819a6e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::MouseMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseMap.AjZowrcOYxiHXasdCIUHqCZjHjRQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseMap::*)(::System::Guid, int32_t, int32_t)>(&::Rewired::MouseMap::AjZowrcOYxiHXasdCIUHqCZjHjRQ)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819a6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMap*>(),
                        {"AjZowrcOYxiHXasdCIUHqCZjHjRQ", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseMap.CHxEhwHZUTXZBfnVZRprgbTuYyRAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MouseMap* (*)(::System::Guid, int32_t, int32_t)>(&::Rewired::MouseMap::CHxEhwHZUTXZBfnVZRprgbTuYyRAA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819a6ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMap*>(),
                        {"CHxEhwHZUTXZBfnVZRprgbTuYyRAA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::MouseMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::MouseMap::_ctor(::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::MouseMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::MouseMap::AjZowrcOYxiHXasdCIUHqCZjHjRQ(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMap*>(),
                        {"AjZowrcOYxiHXasdCIUHqCZjHjRQ", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::MouseMap* Rewired::MouseMap::CHxEhwHZUTXZBfnVZRprgbTuYyRAA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMap*>(),
                        {"CHxEhwHZUTXZBfnVZRprgbTuYyRAA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MouseMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::MouseMap* Rewired::MouseMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::MouseMap*>());
}
inline ::Rewired::MouseMap* Rewired::MouseMap::New_ctor(::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::MouseMap*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::MouseMap::MouseMap()   {
}
