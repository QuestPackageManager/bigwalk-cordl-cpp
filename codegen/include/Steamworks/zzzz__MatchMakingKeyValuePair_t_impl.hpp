#pragma once
// IWYU pragma private; include "Steamworks/MatchMakingKeyValuePair_t.hpp"
#include "Steamworks/zzzz__MatchMakingKeyValuePair_t_def.hpp"
//  Writing Method size for method: ::Steamworks::MatchMakingKeyValuePair_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::MatchMakingKeyValuePair_t::*)(::StringW, ::StringW)>(&::Steamworks::MatchMakingKeyValuePair_t::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180397590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::MatchMakingKeyValuePair_t>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::MatchMakingKeyValuePair_t::_ctor(::StringW  strKey, ::StringW  strValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::MatchMakingKeyValuePair_t>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, strKey, strValue);
}
// Ctor Parameters [CppParam { name: "m_szKey", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_szValue", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::MatchMakingKeyValuePair_t::MatchMakingKeyValuePair_t(::StringW  m_szKey, ::StringW  m_szValue) noexcept  {
this->m_szKey = m_szKey;
this->m_szValue = m_szValue;
}
// Ctor Parameters []
constexpr ::Steamworks::MatchMakingKeyValuePair_t::MatchMakingKeyValuePair_t()   {
}
