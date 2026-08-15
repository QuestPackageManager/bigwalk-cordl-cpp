#pragma once
// IWYU pragma private; include "Steamworks/FileDetailsResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__FileDetailsResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulFileSize", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FileSHA", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::FileDetailsResult_t::FileDetailsResult_t(::Steamworks::EResult  m_eResult, uint64_t  m_ulFileSize, ::ArrayW<uint8_t>  m_FileSHA, uint32_t  m_unFlags) noexcept  {
this->m_eResult = m_eResult;
this->m_ulFileSize = m_ulFileSize;
this->m_FileSHA = m_FileSHA;
this->m_unFlags = m_unFlags;
}
// Ctor Parameters []
constexpr ::Steamworks::FileDetailsResult_t::FileDetailsResult_t()   {
}
