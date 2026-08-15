#pragma once
// IWYU pragma private; include "Shipmates/Events/ShowErrorMessageEvent.hpp"
#include "GlobalNamespace/zzzz__ErrorUtils_impl.hpp"
#include "Shipmates/Utils/zzzz__BaseEvent_impl.hpp"
#include "Shipmates/Events/zzzz__ShowErrorMessageEvent_def.hpp"
#include "GlobalNamespace/zzzz__ErrorUtils_def.hpp"
//  Writing Method size for method: ::Shipmates::Events::ShowErrorMessageEvent.GetErrorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ErrorUtils_ErrorType (::Shipmates::Events::ShowErrorMessageEvent::*)()>(&::Shipmates::Events::ShowErrorMessageEvent::GetErrorType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Events::ShowErrorMessageEvent*>(),
                        {"GetErrorType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Events::ShowErrorMessageEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Events::ShowErrorMessageEvent::*)(::GlobalNamespace::ErrorUtils_ErrorType)>(&::Shipmates::Events::ShowErrorMessageEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Events::ShowErrorMessageEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType& Shipmates::Events::ShowErrorMessageEvent::__cordl_internal_get__error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
constexpr ::GlobalNamespace::ErrorUtils_ErrorType const& Shipmates::Events::ShowErrorMessageEvent::__cordl_internal_get__error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
constexpr void Shipmates::Events::ShowErrorMessageEvent::__cordl_internal_set__error(::GlobalNamespace::ErrorUtils_ErrorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____error = value;
}
inline ::GlobalNamespace::ErrorUtils_ErrorType Shipmates::Events::ShowErrorMessageEvent::GetErrorType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Events::ShowErrorMessageEvent*>(),
                        {"GetErrorType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ErrorUtils_ErrorType>(this, ___internal_method);
}
inline void Shipmates::Events::ShowErrorMessageEvent::_ctor(::GlobalNamespace::ErrorUtils_ErrorType  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Events::ShowErrorMessageEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::Shipmates::Events::ShowErrorMessageEvent* Shipmates::Events::ShowErrorMessageEvent::New_ctor(::GlobalNamespace::ErrorUtils_ErrorType  error)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::Events::ShowErrorMessageEvent*>(error));
}
// Ctor Parameters []
constexpr ::Shipmates::Events::ShowErrorMessageEvent::ShowErrorMessageEvent()   {
}
