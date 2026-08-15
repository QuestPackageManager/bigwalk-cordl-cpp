#pragma once
// IWYU pragma private; include "Rewired/SteamAction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__SteamAction_def.hpp"
//  Writing Method size for method: ::Rewired::SteamAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::SteamAction::*)(::StringW, uint64_t)>(&::Rewired::SteamAction::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818474d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::SteamAction*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::SteamAction::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Rewired::SteamAction::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Rewired::SteamAction::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr uint64_t& Rewired::SteamAction::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr uint64_t const& Rewired::SteamAction::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void Rewired::SteamAction::__cordl_internal_set_handle(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
inline void Rewired::SteamAction::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::SteamAction*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::SteamAction* Rewired::SteamAction::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::SteamAction*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::SteamAction::SteamAction()   {
}
