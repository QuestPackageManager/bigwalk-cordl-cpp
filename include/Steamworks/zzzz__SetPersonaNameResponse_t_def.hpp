#pragma once
// IWYU pragma private; include "Steamworks/SetPersonaNameResponse_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetPersonaNameResponse_t)
// Forward declare root types
namespace Steamworks {
struct SetPersonaNameResponse_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SetPersonaNameResponse_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SetPersonaNameResponse_t, "Steamworks", "SetPersonaNameResponse_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SetPersonaNameResponse_t
#pragma pack(push, 8)
struct CORDL_TYPE SetPersonaNameResponse_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SetPersonaNameResponse_t() ;

// Ctor Parameters [CppParam { name: "m_bSuccess", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_bLocalSuccess", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: None }]
constexpr SetPersonaNameResponse_t(bool  m_bSuccess, bool  m_bLocalSuccess, ::Steamworks::EResult  m_result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16051};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x15b)};

/// @brief Field m_bSuccess, offset: 0x0, size: 0x1, def value: None
 bool  m_bSuccess;

/// @brief Field m_bLocalSuccess, offset: 0x1, size: 0x1, def value: None
 bool  m_bLocalSuccess;

/// @brief Field m_result, offset: 0x4, size: 0x4, def value: None
 ::Steamworks::EResult  m_result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SetPersonaNameResponse_t, m_bSuccess) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SetPersonaNameResponse_t, m_bLocalSuccess) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SetPersonaNameResponse_t, m_result) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SetPersonaNameResponse_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
