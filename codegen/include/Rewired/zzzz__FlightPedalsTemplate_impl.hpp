#pragma once
// IWYU pragma private; include "Rewired/FlightPedalsTemplate.hpp"
#include "Rewired/zzzz__ControllerTemplate_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Rewired/zzzz__FlightPedalsTemplate_def.hpp"
#include "Rewired/zzzz__IControllerTemplateAxis_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "Rewired/zzzz__IFlightPedalsTemplate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::FlightPedalsTemplate.Rewired_IFlightPedalsTemplate_get_leftPedal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::FlightPedalsTemplate::*)()>(&::Rewired::FlightPedalsTemplate::Rewired_IFlightPedalsTemplate_get_leftPedal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::FlightPedalsTemplate*>(),
                        {"Rewired.IFlightPedalsTemplate.get_leftPedal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::FlightPedalsTemplate.Rewired_IFlightPedalsTemplate_get_rightPedal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::FlightPedalsTemplate::*)()>(&::Rewired::FlightPedalsTemplate::Rewired_IFlightPedalsTemplate_get_rightPedal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::FlightPedalsTemplate*>(),
                        {"Rewired.IFlightPedalsTemplate.get_rightPedal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::FlightPedalsTemplate.Rewired_IFlightPedalsTemplate_get_slide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::FlightPedalsTemplate::*)()>(&::Rewired::FlightPedalsTemplate::Rewired_IFlightPedalsTemplate_get_slide)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::FlightPedalsTemplate*>(),
                        {"Rewired.IFlightPedalsTemplate.get_slide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::FlightPedalsTemplate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::FlightPedalsTemplate::*)(::System::Object*)>(&::Rewired::FlightPedalsTemplate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::FlightPedalsTemplate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::FlightPedalsTemplate::setStaticF_typeGuid(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "typeGuid", ::Rewired::FlightPedalsTemplate*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::FlightPedalsTemplate::getStaticF_typeGuid()  {
return ::cordl_internals::getStaticField<::System::Guid, "typeGuid", ::Rewired::FlightPedalsTemplate*>();
}
inline ::Rewired::IControllerTemplateAxis* Rewired::FlightPedalsTemplate::Rewired_IFlightPedalsTemplate_get_leftPedal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::FlightPedalsTemplate*>(),
                        {"Rewired.IFlightPedalsTemplate.get_leftPedal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::FlightPedalsTemplate::Rewired_IFlightPedalsTemplate_get_rightPedal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::FlightPedalsTemplate*>(),
                        {"Rewired.IFlightPedalsTemplate.get_rightPedal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::FlightPedalsTemplate::Rewired_IFlightPedalsTemplate_get_slide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::FlightPedalsTemplate*>(),
                        {"Rewired.IFlightPedalsTemplate.get_slide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline void Rewired::FlightPedalsTemplate::_ctor(::System::Object*  payload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::FlightPedalsTemplate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, payload);
}
inline ::Rewired::FlightPedalsTemplate* Rewired::FlightPedalsTemplate::New_ctor(::System::Object*  payload)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::FlightPedalsTemplate*>(payload));
}
/// @brief Convert operator to "::Rewired::IFlightPedalsTemplate"
constexpr  Rewired::FlightPedalsTemplate::operator ::Rewired::IFlightPedalsTemplate*() noexcept {
return static_cast<::Rewired::IFlightPedalsTemplate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IFlightPedalsTemplate"
constexpr ::Rewired::IFlightPedalsTemplate* Rewired::FlightPedalsTemplate::i___Rewired__IFlightPedalsTemplate() noexcept {
return static_cast<::Rewired::IFlightPedalsTemplate*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr  Rewired::FlightPedalsTemplate::operator ::Rewired::IControllerTemplate*() noexcept {
return static_cast<::Rewired::IControllerTemplate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* Rewired::FlightPedalsTemplate::i___Rewired__IControllerTemplate() noexcept {
return static_cast<::Rewired::IControllerTemplate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::FlightPedalsTemplate::FlightPedalsTemplate()   {
}
