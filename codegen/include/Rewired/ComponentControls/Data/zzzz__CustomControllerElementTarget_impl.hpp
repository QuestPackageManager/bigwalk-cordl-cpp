#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerElementTarget.hpp"
#include "Rewired/zzzz__Pole_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTarget_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementSelector_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTarget_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange::CustomControllerElementTarget_ValueRange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange::CustomControllerElementTarget_ValueRange()   {
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange::Full{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange::Positive{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange::Negative{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget.get_element
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementSelector* (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::get_element)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"get_element", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget.get_valueContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Pole (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::get_valueContribution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"get_valueContribution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget.set_valueContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)(::Rewired::Pole)>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::set_valueContribution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"set_valueContribution", {}, {::i2c::type_of<::Rewired::Pole>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget.get_valueRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::get_valueRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"get_valueRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget.set_valueRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)(::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange)>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::set_valueRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"set_valueRange", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget.get_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::get_invert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"get_invert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget.set_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)(bool)>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::set_invert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"set_invert", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f08f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)(::Rewired::ComponentControls::Data::CustomControllerElementSelector*)>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f0940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTarget.ClearElementCaches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTarget::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTarget::ClearElementCaches)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f08d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"ClearElementCaches", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector*& Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_get__element()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____element;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector* const& Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_get__element() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____element;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_set__element(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____element = value;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange& Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_get__valueRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueRange;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange const& Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_get__valueRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueRange;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_set__valueRange(::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueRange = value;
}
constexpr ::Rewired::Pole& Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_get__valueContribution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueContribution;
}
constexpr ::Rewired::Pole const& Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_get__valueContribution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueContribution;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_set__valueContribution(::Rewired::Pole  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueContribution = value;
}
constexpr bool& Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_get__invert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invert;
}
constexpr bool const& Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_get__invert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invert;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementTarget::__cordl_internal_set__invert(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invert = value;
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementSelector* Rewired::ComponentControls::Data::CustomControllerElementTarget::get_element()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"get_element", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(this, ___internal_method);
}
inline ::Rewired::Pole Rewired::ComponentControls::Data::CustomControllerElementTarget::get_valueContribution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"get_valueContribution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Pole>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTarget::set_valueContribution(::Rewired::Pole  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"set_valueContribution", {}, {::i2c::type_of<::Rewired::Pole>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange Rewired::ComponentControls::Data::CustomControllerElementTarget::get_valueRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"get_valueRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTarget::set_valueRange(::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"set_valueRange", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::Data::CustomControllerElementTarget::get_invert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"get_invert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTarget::set_invert(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"set_invert", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTarget::_ctor(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTarget::ClearElementCaches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(),
                        {"ClearElementCaches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* Rewired::ComponentControls::Data::CustomControllerElementTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>());
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* Rewired::ComponentControls::Data::CustomControllerElementTarget::New_ctor(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget::CustomControllerElementTarget()   {
}
