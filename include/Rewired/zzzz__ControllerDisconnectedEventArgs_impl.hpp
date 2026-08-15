#pragma once
// IWYU pragma private; include "Rewired/ControllerDisconnectedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Rewired/zzzz__ControllerDisconnectedEventArgs_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerDisconnectedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerDisconnectedEventArgs::*)(int32_t)>(&::Rewired::ControllerDisconnectedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDisconnectedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerDisconnectedEventArgs::__cordl_internal_get_rewiredId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredId;
}
constexpr int32_t const& Rewired::ControllerDisconnectedEventArgs::__cordl_internal_get_rewiredId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredId;
}
constexpr void Rewired::ControllerDisconnectedEventArgs::__cordl_internal_set_rewiredId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rewiredId = value;
}
inline void Rewired::ControllerDisconnectedEventArgs::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDisconnectedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerDisconnectedEventArgs* Rewired::ControllerDisconnectedEventArgs::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerDisconnectedEventArgs*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerDisconnectedEventArgs::ControllerDisconnectedEventArgs()   {
}
