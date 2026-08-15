#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SslConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SslConfig)
namespace System::Security::Authentication {
struct SslProtocols;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
struct SslConfig;
}
// Write type traits
MARK_VAL_T(::Mirror::SimpleWeb::SslConfig);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SslConfig, "Mirror.SimpleWeb", "SslConfig");
// Dependencies System.Security.Authentication.SslProtocols
namespace Mirror::SimpleWeb {
// Is value type: true
// CS Name: Mirror.SimpleWeb.SslConfig
struct CORDL_TYPE SslConfig {
public:
// Declarations
/// @brief Method .ctor, addr 0x181ad5fe0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(bool  enabled, ::StringW  certPath, ::StringW  certPassword, ::System::Security::Authentication::SslProtocols  sslProtocols) ;

// Ctor Parameters []
// @brief default ctor
constexpr SslConfig() ;

// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "certPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "certPassword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sslProtocols", ty: "::System::Security::Authentication::SslProtocols", modifiers: "", def_value: None }]
constexpr SslConfig(bool  enabled, ::StringW  certPath, ::StringW  certPassword, ::System::Security::Authentication::SslProtocols  sslProtocols) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20542};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
 bool  enabled;

/// @brief Field certPath, offset: 0x8, size: 0x8, def value: None
 ::StringW  certPath;

/// @brief Field certPassword, offset: 0x10, size: 0x8, def value: None
 ::StringW  certPassword;

/// @brief Field sslProtocols, offset: 0x18, size: 0x4, def value: None
 ::System::Security::Authentication::SslProtocols  sslProtocols;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::SslConfig, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SslConfig, certPath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SslConfig, certPassword) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SslConfig, sslProtocols) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::SslConfig) == 0x20, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
