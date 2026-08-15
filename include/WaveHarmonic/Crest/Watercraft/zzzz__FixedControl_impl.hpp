#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Watercraft/FixedControl.hpp"
#include "WaveHarmonic/Crest/Watercraft/zzzz__Control_impl.hpp"
#include "WaveHarmonic/Crest/Watercraft/zzzz__FixedControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::FixedControl.get_Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Watercraft::FixedControl::*)()>(&::WaveHarmonic::Crest::Watercraft::FixedControl::get_Move)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {"get_Move", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::FixedControl.set_Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::FixedControl::*)(float_t)>(&::WaveHarmonic::Crest::Watercraft::FixedControl::set_Move)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {"set_Move", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::FixedControl.get_Turn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Watercraft::FixedControl::*)()>(&::WaveHarmonic::Crest::Watercraft::FixedControl::get_Turn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {"get_Turn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::FixedControl.set_Turn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::FixedControl::*)(float_t)>(&::WaveHarmonic::Crest::Watercraft::FixedControl::set_Turn)> {
  constexpr static std::size_t size = 0x3450;
  constexpr static std::size_t addrs = 0x180bb44a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {"set_Turn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::FixedControl.get_Input
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::WaveHarmonic::Crest::Watercraft::FixedControl::*)()>(&::WaveHarmonic::Crest::Watercraft::FixedControl::get_Input)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825a0f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::FixedControl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::FixedControl::*)()>(&::WaveHarmonic::Crest::Watercraft::FixedControl::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x180ba5300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::Watercraft::FixedControl::__cordl_internal_get__Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr float_t const& WaveHarmonic::Crest::Watercraft::FixedControl::__cordl_internal_get__Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr void WaveHarmonic::Crest::Watercraft::FixedControl::__cordl_internal_set__Move(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Move = value;
}
constexpr float_t& WaveHarmonic::Crest::Watercraft::FixedControl::__cordl_internal_get__Turn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Turn;
}
constexpr float_t const& WaveHarmonic::Crest::Watercraft::FixedControl::__cordl_internal_get__Turn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Turn;
}
constexpr void WaveHarmonic::Crest::Watercraft::FixedControl::__cordl_internal_set__Turn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Turn = value;
}
inline float_t WaveHarmonic::Crest::Watercraft::FixedControl::get_Move()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {"get_Move", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::FixedControl::set_Move(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {"set_Move", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::Watercraft::FixedControl::get_Turn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {"get_Turn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::FixedControl::set_Turn(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {"set_Turn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 WaveHarmonic::Crest::Watercraft::FixedControl::get_Input()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::FixedControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::FixedControl*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Watercraft::FixedControl* WaveHarmonic::Crest::Watercraft::FixedControl::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Watercraft::FixedControl*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Watercraft::FixedControl::FixedControl()   {
}
