#pragma once
// IWYU pragma private; include "Rewired/JoystickMap.hpp"
#include "Rewired/zzzz__ControllerMapWithAxes_impl.hpp"
#include "Rewired/zzzz__JoystickMap_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::JoystickMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::JoystickMap::*)()>(&::Rewired::JoystickMap::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819a6e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::JoystickMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::JoystickMap::*)(::Rewired::JoystickMap*)>(&::Rewired::JoystickMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819a6e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::JoystickMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::JoystickMap.EZKlSveabJIjClcphmlPPjNriixAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::JoystickMap::*)(::System::Guid, int32_t, int32_t)>(&::Rewired::JoystickMap::EZKlSveabJIjClcphmlPPjNriixAA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819a6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMap*>(),
                        {"EZKlSveabJIjClcphmlPPjNriixAA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::JoystickMap.YLUIPsXRKDMpnAeuVzDTSGrEIInS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::JoystickMap* (*)(::System::Guid, int32_t, int32_t)>(&::Rewired::JoystickMap::YLUIPsXRKDMpnAeuVzDTSGrEIInS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819a6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMap*>(),
                        {"YLUIPsXRKDMpnAeuVzDTSGrEIInS", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::JoystickMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::JoystickMap::_ctor(::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::JoystickMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::JoystickMap::EZKlSveabJIjClcphmlPPjNriixAA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMap*>(),
                        {"EZKlSveabJIjClcphmlPPjNriixAA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::JoystickMap* Rewired::JoystickMap::YLUIPsXRKDMpnAeuVzDTSGrEIInS(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMap*>(),
                        {"YLUIPsXRKDMpnAeuVzDTSGrEIInS", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::JoystickMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::JoystickMap* Rewired::JoystickMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::JoystickMap*>());
}
inline ::Rewired::JoystickMap* Rewired::JoystickMap::New_ctor(::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::JoystickMap*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::JoystickMap::JoystickMap()   {
}
