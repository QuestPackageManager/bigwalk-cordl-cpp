#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/MaskHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaskHelper)
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class MaskHelper;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::MaskHelper*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::MaskHelper*, "Mirror.SimpleWeb", "MaskHelper");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.MaskHelper
class CORDL_TYPE MaskHelper : public ::System::Object {
public:
// Declarations
/// @brief Field maskBuffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_maskBuffer, put=__cordl_internal_set_maskBuffer)) ::ArrayW<uint8_t>  maskBuffer;

/// @brief Field random, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_random, put=__cordl_internal_set_random)) ::System::Security::Cryptography::RNGCryptoServiceProvider*  random;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x181ad12e0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Mirror::SimpleWeb::MaskHelper* New_ctor() ;

/// @brief Method WriteMask, addr 0x181ad1300, size 0x80, virtual false, abstract: false, final false
inline int32_t WriteMask(::ArrayW<uint8_t>  buffer, int32_t  offset) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_maskBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_maskBuffer() ;

constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider* const& __cordl_internal_get_random() const;

constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider*& __cordl_internal_get_random() ;

constexpr void __cordl_internal_set_maskBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_random(::System::Security::Cryptography::RNGCryptoServiceProvider*  value) ;

/// @brief Method .ctor, addr 0x181ad1380, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskHelper(MaskHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskHelper(MaskHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20538};

/// @brief Field maskBuffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___maskBuffer;

/// @brief Field random, offset: 0x18, size: 0x8, def value: None
 ::System::Security::Cryptography::RNGCryptoServiceProvider*  ___random;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::MaskHelper, ___maskBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::MaskHelper, ___random) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::MaskHelper) == 0x20, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
