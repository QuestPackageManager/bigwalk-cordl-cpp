#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/TcpConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TcpConfig)
namespace System::Net::Sockets {
class TcpClient;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
struct TcpConfig;
}
// Write type traits
MARK_VAL_T(::Mirror::SimpleWeb::TcpConfig);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::TcpConfig, "Mirror.SimpleWeb", "TcpConfig");
// Dependencies 
namespace Mirror::SimpleWeb {
// Is value type: true
// CS Name: Mirror.SimpleWeb.TcpConfig
struct CORDL_TYPE TcpConfig {
public:
// Declarations
/// @brief Method ApplyTo, addr 0x181ad60f0, size 0x60, virtual false, abstract: false, final false
inline void ApplyTo(::System::Net::Sockets::TcpClient*  client) ;

/// @brief Method .ctor, addr 0x1805c6c50, size 0x20, virtual false, abstract: false, final false
inline void _ctor(bool  noDelay, int32_t  sendTimeout, int32_t  receiveTimeout) ;

// Ctor Parameters []
// @brief default ctor
constexpr TcpConfig() ;

// Ctor Parameters [CppParam { name: "noDelay", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sendTimeout", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "receiveTimeout", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TcpConfig(bool  noDelay, int32_t  sendTimeout, int32_t  receiveTimeout) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20539};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field noDelay, offset: 0x0, size: 0x1, def value: None
 bool  noDelay;

/// @brief Field sendTimeout, offset: 0x4, size: 0x4, def value: None
 int32_t  sendTimeout;

/// @brief Field receiveTimeout, offset: 0x8, size: 0x4, def value: None
 int32_t  receiveTimeout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::TcpConfig, noDelay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::TcpConfig, sendTimeout) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::TcpConfig, receiveTimeout) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::TcpConfig) == 0xc, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
