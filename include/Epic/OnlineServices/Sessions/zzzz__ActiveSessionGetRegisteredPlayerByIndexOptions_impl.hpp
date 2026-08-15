#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSessionGetRegisteredPlayerByIndexOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionGetRegisteredPlayerByIndexOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions.get_PlayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions::*)()>(&::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions::get_PlayerIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>(),
                        {"get_PlayerIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions.set_PlayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions::set_PlayerIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>(),
                        {"set_PlayerIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions::get_PlayerIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>(),
                        {"get_PlayerIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions::set_PlayerIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>(),
                        {"set_PlayerIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PlayerIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions::ActiveSessionGetRegisteredPlayerByIndexOptions(uint32_t  _PlayerIndex_k__BackingField) noexcept  {
this->_PlayerIndex_k__BackingField = _PlayerIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions::ActiveSessionGetRegisteredPlayerByIndexOptions()   {
}
