#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SslConfigLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SslConfigLoader)
namespace Mirror::SimpleWeb {
struct SslConfigLoader_Cert;
}
namespace Mirror::SimpleWeb {
struct SslConfig;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class SslConfigLoader;
}
namespace Mirror::SimpleWeb {
struct SslConfigLoader_Cert;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::SslConfigLoader*);
MARK_VAL_T(::Mirror::SimpleWeb::SslConfigLoader_Cert);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SslConfigLoader*, "Mirror.SimpleWeb", "SslConfigLoader");
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SslConfigLoader_Cert, "Mirror.SimpleWeb", "SslConfigLoader/Cert");
// Dependencies 
namespace Mirror::SimpleWeb {
// Is value type: true
// CS Name: Mirror.SimpleWeb.SslConfigLoader/Cert
struct CORDL_TYPE SslConfigLoader_Cert {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SslConfigLoader_Cert() ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }]
constexpr SslConfigLoader_Cert(::StringW  path, ::StringW  password) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20548};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field path, offset: 0x0, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field password, offset: 0x8, size: 0x8, def value: None
 ::StringW  password;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::SslConfigLoader_Cert, path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SslConfigLoader_Cert, password) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::SslConfigLoader_Cert) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.SslConfigLoader
class CORDL_TYPE SslConfigLoader : public ::System::Object {
public:
// Declarations
using Cert = ::Mirror::SimpleWeb::SslConfigLoader_Cert;

/// @brief Method Load, addr 0x181ad5e90, size 0x150, virtual false, abstract: false, final false
static inline ::Mirror::SimpleWeb::SslConfig Load(bool  sslEnabled, ::StringW  sslCertJson, ::System::Security::Authentication::SslProtocols  sslProtocols) ;

/// @brief Method LoadCertJson, addr 0x181ad5dd0, size 0xc0, virtual false, abstract: false, final false
static inline ::Mirror::SimpleWeb::SslConfigLoader_Cert LoadCertJson(::StringW  certJsonPath) ;

static inline ::Mirror::SimpleWeb::SslConfigLoader* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SslConfigLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SslConfigLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SslConfigLoader(SslConfigLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SslConfigLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SslConfigLoader(SslConfigLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20549};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::SslConfigLoader) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
