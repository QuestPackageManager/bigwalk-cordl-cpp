#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedException.hpp"
#include "GlobalNamespace/zzzz__ErrorUtils_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizedException_def.hpp"
#include "GlobalNamespace/zzzz__ErrorUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizedException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedException::*)(::StringW, ::GlobalNamespace::ErrorUtils_ErrorType)>(&::GlobalNamespace::LocalizedException::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac6d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType& GlobalNamespace::LocalizedException::__cordl_internal_get_ErrorsTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorsTypes;
}
constexpr ::GlobalNamespace::ErrorUtils_ErrorType const& GlobalNamespace::LocalizedException::__cordl_internal_get_ErrorsTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorsTypes;
}
constexpr void GlobalNamespace::LocalizedException::__cordl_internal_set_ErrorsTypes(::GlobalNamespace::ErrorUtils_ErrorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorsTypes = value;
}
inline void GlobalNamespace::LocalizedException::_ctor(::StringW  message, ::GlobalNamespace::ErrorUtils_ErrorType  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, error);
}
inline ::GlobalNamespace::LocalizedException* GlobalNamespace::LocalizedException::New_ctor(::StringW  message, ::GlobalNamespace::ErrorUtils_ErrorType  error)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizedException*>(message, error));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedException::LocalizedException()   {
}
