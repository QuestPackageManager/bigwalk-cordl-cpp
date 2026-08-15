#pragma once
// IWYU pragma private; include "Rewired/CustomControllerMap.hpp"
#include "Rewired/zzzz__ControllerMapWithAxes_impl.hpp"
#include "Rewired/zzzz__CustomControllerMap_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::CustomControllerMap.get_sourceControllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::CustomControllerMap::*)()>(&::Rewired::CustomControllerMap::get_sourceControllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {"get_sourceControllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomControllerMap.set_sourceControllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomControllerMap::*)(int32_t)>(&::Rewired::CustomControllerMap::set_sourceControllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {"set_sourceControllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomControllerMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomControllerMap::*)()>(&::Rewired::CustomControllerMap::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819a0610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomControllerMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomControllerMap::*)(::Rewired::CustomControllerMap*)>(&::Rewired::CustomControllerMap::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819a05d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::CustomControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomControllerMap.SBVUXoCihGblXLdFpTNhFIzHxFJC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomControllerMap::*)(::System::Guid, int32_t, int32_t, int32_t)>(&::Rewired::CustomControllerMap::SBVUXoCihGblXLdFpTNhFIzHxFJC)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819a05b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {"SBVUXoCihGblXLdFpTNhFIzHxFJC", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomControllerMap.FisZnWgLzBmIanQlNmTrmiLneTceA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::CustomControllerMap* (*)(::System::Guid, int32_t, int32_t, int32_t)>(&::Rewired::CustomControllerMap::FisZnWgLzBmIanQlNmTrmiLneTceA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819a0530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {"FisZnWgLzBmIanQlNmTrmiLneTceA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::CustomControllerMap::__cordl_internal_get_kXbQozkNUcwlHYiSjeymGlSkFcfSA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kXbQozkNUcwlHYiSjeymGlSkFcfSA;
}
constexpr int32_t const& Rewired::CustomControllerMap::__cordl_internal_get_kXbQozkNUcwlHYiSjeymGlSkFcfSA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kXbQozkNUcwlHYiSjeymGlSkFcfSA;
}
constexpr void Rewired::CustomControllerMap::__cordl_internal_set_kXbQozkNUcwlHYiSjeymGlSkFcfSA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kXbQozkNUcwlHYiSjeymGlSkFcfSA = value;
}
inline int32_t Rewired::CustomControllerMap::get_sourceControllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {"get_sourceControllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::CustomControllerMap::set_sourceControllerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {"set_sourceControllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::CustomControllerMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::CustomControllerMap::_ctor(::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::CustomControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::CustomControllerMap::SBVUXoCihGblXLdFpTNhFIzHxFJC(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {"SBVUXoCihGblXLdFpTNhFIzHxFJC", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::CustomControllerMap* Rewired::CustomControllerMap::FisZnWgLzBmIanQlNmTrmiLneTceA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMap*>(),
                        {"FisZnWgLzBmIanQlNmTrmiLneTceA", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::CustomControllerMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::CustomControllerMap* Rewired::CustomControllerMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CustomControllerMap*>());
}
inline ::Rewired::CustomControllerMap* Rewired::CustomControllerMap::New_ctor(::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CustomControllerMap*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::CustomControllerMap::CustomControllerMap()   {
}
