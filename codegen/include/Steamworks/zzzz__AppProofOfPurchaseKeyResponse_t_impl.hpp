#pragma once
// IWYU pragma private; include "Steamworks/AppProofOfPurchaseKeyResponse_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__AppProofOfPurchaseKeyResponse_t_def.hpp"
//  Writing Method size for method: ::Steamworks::AppProofOfPurchaseKeyResponse_t.get_m_rgchKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::AppProofOfPurchaseKeyResponse_t::*)()>(&::Steamworks::AppProofOfPurchaseKeyResponse_t::get_m_rgchKey)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppProofOfPurchaseKeyResponse_t>(),
                        {"get_m_rgchKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::AppProofOfPurchaseKeyResponse_t.set_m_rgchKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::AppProofOfPurchaseKeyResponse_t::*)(::StringW)>(&::Steamworks::AppProofOfPurchaseKeyResponse_t::set_m_rgchKey)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18054b030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppProofOfPurchaseKeyResponse_t>(),
                        {"set_m_rgchKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::AppProofOfPurchaseKeyResponse_t::get_m_rgchKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppProofOfPurchaseKeyResponse_t>(),
                        {"get_m_rgchKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::AppProofOfPurchaseKeyResponse_t::set_m_rgchKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::AppProofOfPurchaseKeyResponse_t>(),
                        {"set_m_rgchKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cchKeyLength", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchKey_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::AppProofOfPurchaseKeyResponse_t::AppProofOfPurchaseKeyResponse_t(::Steamworks::EResult  m_eResult, uint32_t  m_nAppID, uint32_t  m_cchKeyLength, ::ArrayW<uint8_t>  m_rgchKey_) noexcept  {
this->m_eResult = m_eResult;
this->m_nAppID = m_nAppID;
this->m_cchKeyLength = m_cchKeyLength;
this->m_rgchKey_ = m_rgchKey_;
}
// Ctor Parameters []
constexpr ::Steamworks::AppProofOfPurchaseKeyResponse_t::AppProofOfPurchaseKeyResponse_t()   {
}
