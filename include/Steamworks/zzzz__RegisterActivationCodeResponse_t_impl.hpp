#pragma once
// IWYU pragma private; include "Steamworks/RegisterActivationCodeResponse_t.hpp"
#include "Steamworks/zzzz__ERegisterActivationCodeResult_impl.hpp"
#include "Steamworks/zzzz__RegisterActivationCodeResponse_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::ERegisterActivationCodeResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unPackageRegistered", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RegisterActivationCodeResponse_t::RegisterActivationCodeResponse_t(::Steamworks::ERegisterActivationCodeResult  m_eResult, uint32_t  m_unPackageRegistered) noexcept  {
this->m_eResult = m_eResult;
this->m_unPackageRegistered = m_unPackageRegistered;
}
// Ctor Parameters []
constexpr ::Steamworks::RegisterActivationCodeResponse_t::RegisterActivationCodeResponse_t()   {
}
