#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/CryptoConvert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoConvert)
// Forward declare root types
namespace Mono::Security::Cryptography {
class CryptoConvert;
}
// Write type traits
MARK_REF_T(::Mono::Security::Cryptography::CryptoConvert*);
DEFINE_IL2CPP_CLASS(::Mono::Security::Cryptography::CryptoConvert*, "Mono.Security.Cryptography", "CryptoConvert");
// Dependencies System.Object
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.CryptoConvert
class CORDL_TYPE CryptoConvert : public ::System::Object {
public:
// Declarations
/// @brief Method FromHex, addr 0x1815b4450, size 0x170, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromHex(::StringW  hex) ;

/// @brief Method FromHexChar, addr 0x1815b4400, size 0x50, virtual false, abstract: false, final false
static inline uint8_t FromHexChar(char16_t  c) ;

/// @brief Method ToHex, addr 0x1815b45c0, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW ToHex(::ArrayW<uint8_t>  input) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CryptoConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoConvert(CryptoConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoConvert(CryptoConvert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19187};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::Cryptography::CryptoConvert) == 0x10, "Size mismatch!");

} // namespace end def Mono::Security::Cryptography
