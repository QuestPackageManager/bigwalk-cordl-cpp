#pragma once
// IWYU pragma private; include "Rewired/SteamActionSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__SteamActionSet_def.hpp"
#include "Rewired/zzzz__SteamAction_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Rewired::SteamActionSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::SteamActionSet::*)(::StringW, uint64_t)>(&::Rewired::SteamActionSet::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181847470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::SteamActionSet*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::SteamActionSet.AddAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::SteamActionSet::*)(::Rewired::SteamAction*)>(&::Rewired::SteamActionSet::AddAction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181847430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::SteamActionSet*>(),
                        {"AddAction", {}, {::i2c::type_of<::Rewired::SteamAction*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::SteamActionSet::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Rewired::SteamActionSet::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Rewired::SteamActionSet::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr uint64_t& Rewired::SteamActionSet::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr uint64_t const& Rewired::SteamActionSet::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void Rewired::SteamActionSet::__cordl_internal_set_handle(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::SteamAction*>*& Rewired::SteamActionSet::__cordl_internal_get_actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::SteamAction*>* const& Rewired::SteamActionSet::__cordl_internal_get_actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
constexpr void Rewired::SteamActionSet::__cordl_internal_set_actions(::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::SteamAction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actions = value;
}
inline void Rewired::SteamActionSet::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::SteamActionSet*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::SteamActionSet::AddAction(::Rewired::SteamAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::SteamActionSet*>(),
                        {"AddAction", {}, {::i2c::type_of<::Rewired::SteamAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::Rewired::SteamActionSet* Rewired::SteamActionSet::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::SteamActionSet*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::SteamActionSet::SteamActionSet()   {
}
