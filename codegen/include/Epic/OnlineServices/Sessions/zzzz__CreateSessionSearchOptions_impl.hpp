#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CreateSessionSearchOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CreateSessionSearchOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::CreateSessionSearchOptions.get_MaxSearchResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sessions::CreateSessionSearchOptions::*)()>(&::Epic::OnlineServices::Sessions::CreateSessionSearchOptions::get_MaxSearchResults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CreateSessionSearchOptions>(),
                        {"get_MaxSearchResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::CreateSessionSearchOptions.set_MaxSearchResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::CreateSessionSearchOptions::*)(uint32_t)>(&::Epic::OnlineServices::Sessions::CreateSessionSearchOptions::set_MaxSearchResults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CreateSessionSearchOptions>(),
                        {"set_MaxSearchResults", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Sessions::CreateSessionSearchOptions::get_MaxSearchResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CreateSessionSearchOptions>(),
                        {"get_MaxSearchResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::CreateSessionSearchOptions::set_MaxSearchResults(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CreateSessionSearchOptions>(),
                        {"set_MaxSearchResults", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_MaxSearchResults_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::CreateSessionSearchOptions::CreateSessionSearchOptions(uint32_t  _MaxSearchResults_k__BackingField) noexcept  {
this->_MaxSearchResults_k__BackingField = _MaxSearchResults_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::CreateSessionSearchOptions::CreateSessionSearchOptions()   {
}
