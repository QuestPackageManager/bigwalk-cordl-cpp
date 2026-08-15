#pragma once
// IWYU pragma private; include "Rewired/ControllerStatusChangedEventArgs.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Rewired/zzzz__ControllerStatusChangedEventArgs_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerStatusChangedEventArgs.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerStatusChangedEventArgs::*)()>(&::Rewired::ControllerStatusChangedEventArgs::get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerStatusChangedEventArgs.get_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerStatusChangedEventArgs::*)()>(&::Rewired::ControllerStatusChangedEventArgs::get_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {"get_controllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerStatusChangedEventArgs.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::ControllerStatusChangedEventArgs::*)()>(&::Rewired::ControllerStatusChangedEventArgs::get_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerStatusChangedEventArgs.get_controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::Rewired::ControllerStatusChangedEventArgs::*)()>(&::Rewired::ControllerStatusChangedEventArgs::get_controller)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18183dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {"get_controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerStatusChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerStatusChangedEventArgs::*)(::StringW, int32_t, ::Rewired::ControllerType)>(&::Rewired::ControllerStatusChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181699600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::ControllerStatusChangedEventArgs::__cordl_internal_get_XSVAYDTKAsXyViZDpUJXjocBhOtW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XSVAYDTKAsXyViZDpUJXjocBhOtW;
}
constexpr ::StringW const& Rewired::ControllerStatusChangedEventArgs::__cordl_internal_get_XSVAYDTKAsXyViZDpUJXjocBhOtW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XSVAYDTKAsXyViZDpUJXjocBhOtW;
}
constexpr void Rewired::ControllerStatusChangedEventArgs::__cordl_internal_set_XSVAYDTKAsXyViZDpUJXjocBhOtW(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XSVAYDTKAsXyViZDpUJXjocBhOtW = value;
}
constexpr int32_t& Rewired::ControllerStatusChangedEventArgs::__cordl_internal_get_vzHfCMJnrNemZNfGjPrZDvciaGHb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vzHfCMJnrNemZNfGjPrZDvciaGHb;
}
constexpr int32_t const& Rewired::ControllerStatusChangedEventArgs::__cordl_internal_get_vzHfCMJnrNemZNfGjPrZDvciaGHb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vzHfCMJnrNemZNfGjPrZDvciaGHb;
}
constexpr void Rewired::ControllerStatusChangedEventArgs::__cordl_internal_set_vzHfCMJnrNemZNfGjPrZDvciaGHb(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vzHfCMJnrNemZNfGjPrZDvciaGHb = value;
}
constexpr ::Rewired::ControllerType& Rewired::ControllerStatusChangedEventArgs::__cordl_internal_get_QRaGqQBHitazSACrYlVCXJhhYedD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QRaGqQBHitazSACrYlVCXJhhYedD;
}
constexpr ::Rewired::ControllerType const& Rewired::ControllerStatusChangedEventArgs::__cordl_internal_get_QRaGqQBHitazSACrYlVCXJhhYedD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QRaGqQBHitazSACrYlVCXJhhYedD;
}
constexpr void Rewired::ControllerStatusChangedEventArgs::__cordl_internal_set_QRaGqQBHitazSACrYlVCXJhhYedD(::Rewired::ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QRaGqQBHitazSACrYlVCXJhhYedD = value;
}
inline ::StringW Rewired::ControllerStatusChangedEventArgs::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Rewired::ControllerStatusChangedEventArgs::get_controllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {"get_controllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::ControllerType Rewired::ControllerStatusChangedEventArgs::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline ::Rewired::Controller* Rewired::ControllerStatusChangedEventArgs::get_controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {"get_controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(this, ___internal_method);
}
inline void Rewired::ControllerStatusChangedEventArgs::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerStatusChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ControllerStatusChangedEventArgs* Rewired::ControllerStatusChangedEventArgs::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerStatusChangedEventArgs*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerStatusChangedEventArgs::ControllerStatusChangedEventArgs()   {
}
