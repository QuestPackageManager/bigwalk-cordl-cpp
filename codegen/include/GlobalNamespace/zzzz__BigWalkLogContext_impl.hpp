#pragma once
// IWYU pragma private; include "GlobalNamespace/BigWalkLogContext.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveContext_impl.hpp"
#include "GlobalNamespace/zzzz__BigWalkLogContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BigWalkLogContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigWalkLogContext::*)()>(&::GlobalNamespace::BigWalkLogContext::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181acada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkLogContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BigWalkLogContext::__cordl_internal_get_networkMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMode;
}
constexpr ::StringW const& GlobalNamespace::BigWalkLogContext::__cordl_internal_get_networkMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMode;
}
constexpr void GlobalNamespace::BigWalkLogContext::__cordl_internal_set_networkMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkMode = value;
}
constexpr ::StringW& GlobalNamespace::BigWalkLogContext::__cordl_internal_get_onlineFriendCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlineFriendCode;
}
constexpr ::StringW const& GlobalNamespace::BigWalkLogContext::__cordl_internal_get_onlineFriendCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlineFriendCode;
}
constexpr void GlobalNamespace::BigWalkLogContext::__cordl_internal_set_onlineFriendCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlineFriendCode = value;
}
inline void GlobalNamespace::BigWalkLogContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkLogContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BigWalkLogContext* GlobalNamespace::BigWalkLogContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BigWalkLogContext*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BigWalkLogContext::BigWalkLogContext()   {
}
