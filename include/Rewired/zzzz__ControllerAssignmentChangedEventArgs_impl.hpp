#pragma once
// IWYU pragma private; include "Rewired/ControllerAssignmentChangedEventArgs.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Rewired/zzzz__ControllerAssignmentChangedEventArgs_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerAssignmentChangedEventArgs.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerAssignmentChangedEventArgs::*)()>(&::Rewired::ControllerAssignmentChangedEventArgs::get_state)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerAssignmentChangedEventArgs*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerAssignmentChangedEventArgs.get_controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::Rewired::ControllerAssignmentChangedEventArgs::*)()>(&::Rewired::ControllerAssignmentChangedEventArgs::get_controller)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18183dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerAssignmentChangedEventArgs*>(),
                        {"get_controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerAssignmentChangedEventArgs.get_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::Rewired::ControllerAssignmentChangedEventArgs::*)()>(&::Rewired::ControllerAssignmentChangedEventArgs::get_player)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18183ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerAssignmentChangedEventArgs*>(),
                        {"get_player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerAssignmentChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerAssignmentChangedEventArgs::*)(int32_t, int32_t, ::Rewired::ControllerType, bool)>(&::Rewired::ControllerAssignmentChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18183dd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerAssignmentChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_get_oigvtqHFIHgGQEnQkcnXCmqywsPD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oigvtqHFIHgGQEnQkcnXCmqywsPD;
}
constexpr bool const& Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_get_oigvtqHFIHgGQEnQkcnXCmqywsPD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oigvtqHFIHgGQEnQkcnXCmqywsPD;
}
constexpr void Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_set_oigvtqHFIHgGQEnQkcnXCmqywsPD(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oigvtqHFIHgGQEnQkcnXCmqywsPD = value;
}
constexpr int32_t& Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_get_HsiNFElhtuWUDtcMjqxsDDkPnWep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HsiNFElhtuWUDtcMjqxsDDkPnWep;
}
constexpr int32_t const& Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_get_HsiNFElhtuWUDtcMjqxsDDkPnWep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HsiNFElhtuWUDtcMjqxsDDkPnWep;
}
constexpr void Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_set_HsiNFElhtuWUDtcMjqxsDDkPnWep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HsiNFElhtuWUDtcMjqxsDDkPnWep = value;
}
constexpr int32_t& Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_get_sUDGPEhutdqUbpYgzjnSNeosKcPs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sUDGPEhutdqUbpYgzjnSNeosKcPs;
}
constexpr int32_t const& Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_get_sUDGPEhutdqUbpYgzjnSNeosKcPs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sUDGPEhutdqUbpYgzjnSNeosKcPs;
}
constexpr void Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_set_sUDGPEhutdqUbpYgzjnSNeosKcPs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sUDGPEhutdqUbpYgzjnSNeosKcPs = value;
}
constexpr ::Rewired::ControllerType& Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_get_RXJOmFuOElQWBDOoulJzjRcZtAJS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RXJOmFuOElQWBDOoulJzjRcZtAJS;
}
constexpr ::Rewired::ControllerType const& Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_get_RXJOmFuOElQWBDOoulJzjRcZtAJS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RXJOmFuOElQWBDOoulJzjRcZtAJS;
}
constexpr void Rewired::ControllerAssignmentChangedEventArgs::__cordl_internal_set_RXJOmFuOElQWBDOoulJzjRcZtAJS(::Rewired::ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RXJOmFuOElQWBDOoulJzjRcZtAJS = value;
}
inline bool Rewired::ControllerAssignmentChangedEventArgs::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerAssignmentChangedEventArgs*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Controller* Rewired::ControllerAssignmentChangedEventArgs::get_controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerAssignmentChangedEventArgs*>(),
                        {"get_controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(this, ___internal_method);
}
inline ::Rewired::Player* Rewired::ControllerAssignmentChangedEventArgs::get_player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerAssignmentChangedEventArgs*>(),
                        {"get_player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(this, ___internal_method);
}
inline void Rewired::ControllerAssignmentChangedEventArgs::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerAssignmentChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::ControllerAssignmentChangedEventArgs* Rewired::ControllerAssignmentChangedEventArgs::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerAssignmentChangedEventArgs*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerAssignmentChangedEventArgs::ControllerAssignmentChangedEventArgs()   {
}
